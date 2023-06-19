using Microsoft.MixedReality.Toolkit.UI;
using Microsoft.MixedReality.Toolkit.UI.BoundsControl;
using UnityEngine;

public class DisableRotation : MonoBehaviour
{
    private BoundsControl boundsControl;
    public GameObject KaartTafel;

    private void Start()
    {
        KaartTafel.transform.rotation = Quaternion.identity;
    }
}