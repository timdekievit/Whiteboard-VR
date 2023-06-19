using UnityEngine;

public class DisableSkybox : MonoBehaviour
{
    public Material skyboxMaterial;
    public string myString;

    private void Start()
    {
        skyboxMaterial = RenderSettings.skybox;
        DisableSkyboxFunc();
        enabled = true;
    }

    public void DisableSkyboxFunc()
    {
        if (enabled)
        {
            RenderSettings.skybox = RenderSettings.skybox == null ? skyboxMaterial : null;
            Debug.Log("Skybox disabled");
        }
        else
        {
            RenderSettings.skybox = skyboxMaterial;
        }
    }
}