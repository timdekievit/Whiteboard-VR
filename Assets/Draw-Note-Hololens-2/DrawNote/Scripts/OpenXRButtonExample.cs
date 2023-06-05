using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;

public class OpenXRButtonExample : MonoBehaviour
{
    // Set a threshold for how much the trigger needs to be pressed to register as pressed
    public float triggerThreshold = 0.5f;

    // Get the right-handed device
    InputDevice rightHand;

    List<InputDevice> devices = new List<InputDevice>();


    void Start ()
    {
        InputDevices.GetDevices(devices);


        foreach (var item in devices)
        {
            Debug.Log(item.name + item.characteristics);
        }
    }

    // Update is called once per frame
    void Update()
    {

        foreach(var item in devices)
        {
            Debug.Log(item.name + item.characteristics);
        }

        // Check if the device is valid
        if (rightHand.isValid)
        {
            // Get the current state of the trigger feature
            float triggerValue;
            bool triggerState = rightHand.TryGetFeatureValue(CommonUsages.trigger, out triggerValue);

            // Check if the trigger is pressed
            if (triggerState && triggerValue > triggerThreshold)
            {
                // Do something when the trigger is pressed
                Debug.Log("Trigger pressed");
            }
        }
    }
}
