using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.Input;
using UnityEngine;

public class FinalTest : MonoBehaviour, IMixedRealityInputHandler, IMixedRealityInputActionHandler
{
    // The input action that corresponds to the back trigger
    public MixedRealityInputAction triggerAction;

    // A flag to indicate if the trigger is pressed
    private bool triggerPressed = false;

    // Register for input events
    private void OnEnable()
    {
        CoreServices.InputSystem?.RegisterHandler<IMixedRealityInputHandler>(this);
        CoreServices.InputSystem?.RegisterHandler<IMixedRealityInputActionHandler>(this);
    }

    // Unregister from input events
    private void OnDisable()
    {
        CoreServices.InputSystem?.UnregisterHandler<IMixedRealityInputHandler>(this);
        CoreServices.InputSystem?.UnregisterHandler<IMixedRealityInputActionHandler>(this);
    }

    // Implement IMixedRealityInputHandler
    public void OnInputUp(InputEventData eventData)
    {
        // Check if the event data matches the trigger action
        if (eventData.MixedRealityInputAction == triggerAction)
        {
            // Set the flag to false
            triggerPressed = false;
            Debug.Log("Trigger released");
        }
    }

    public void OnInputDown(InputEventData eventData)
    {
        // Check if the event data matches the trigger action
        if (eventData.MixedRealityInputAction == triggerAction)
        {
            // Set the flag to true
            triggerPressed = true;
            Debug.Log("Trigger pressed");
        }
    }

    // Implement IMixedRealityInputActionHandler
    public void OnActionStarted(BaseInputEventData eventData)
    {
        // Check if the event data matches the trigger action
        if (eventData.MixedRealityInputAction == triggerAction)
        {
            // Do something when the action starts
            Debug.Log("Trigger action started");
        }
    }

    public void OnActionEnded(BaseInputEventData eventData)
    {
        // Check if the event data matches the trigger action
        if (eventData.MixedRealityInputAction == triggerAction)
        {
            // Do something when the action ends
            Debug.Log("Trigger action ended");
        }
    }
}