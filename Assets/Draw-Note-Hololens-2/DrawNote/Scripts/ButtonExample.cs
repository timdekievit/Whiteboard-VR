using UnityEngine;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.Utilities;
using UnityEngine.XR;
using Microsoft.MixedReality.Toolkit;

public class ButtonExample : MonoBehaviour
{
    // // The handedness of the controller
    // public Handedness handedness;

    // // The input action for triggering haptic feedback
    // public MixedRealityInputAction hapticAction;


    // // The haptic amplitude and duration
    // public float hapticAmplitude = 0.5f;
    // public float hapticDuration = 0.1f;

    // // The input source for the controller
    // private IMixedRealityController controller;

    // void Start()
    // {
    //     // controller should be linked to meta quest 2 controller
    //     controller = CoreServices.InputSystem?.RequestNewGenericInputSource("Quest2Controller", handedness);

    //     // Get the input source for the controller handedness
    //     // controller = InputSystem?.GetController(handedness);
    // }

    // void Update()
    // {
    //     // Check if the input source is valid
    //     if (controller != null)
    //     {
    //         // Check if the haptic action is pressed
    //         if (controller.InputSource.IsInputPressed(hapticAction))
    //         {
    //             // Send a haptic impulse to the controller
    //             controller.InputSource.SendHapticFeedback(hapticAmplitude, hapticDuration);
    //         }
    //     }
    // }




    void Start()
    {

    }

    void Update()
    {
        foreach (IMixedRealityController controller in CoreServices.InputSystem.DetectedControllers)
        {
            // Interactions for a controller is the list of inputs that this controller exposes
            foreach (MixedRealityInteractionMapping interactionMapping in controller.Interactions)
            {
                // // 6DOF controllers support the "SpatialPointer" type (pointing direction)
                // // or "GripPointer" type (direction of the 6DOF controller)
                // if (interactionMapping.InputType == DeviceInputType.SpatialPointer)
                // {
                //     Debug.Log("Spatial pointer PositionData: " + interactionMapping.PositionData);
                //     Debug.Log("Spatial pointer RotationData: " + interactionMapping.RotationData);
                // }

                // if (interactionMapping.InputType == DeviceInputType.SpatialGrip)
                // {
                //     Debug.Log("Spatial grip PositionData: " + interactionMapping.PositionData);
                //     Debug.Log("Spatial grip RotationData: " + interactionMapping.RotationData);
                // }

                if (interactionMapping.InputType == DeviceInputType.Select)
                {
                    Debug.Log("Select PositionData: " + interactionMapping.PositionData);
                    Debug.Log("Select RotationData: " + interactionMapping.RotationData);
                }


            }
        }
    }
}