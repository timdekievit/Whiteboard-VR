using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ToggleRigidbody : MonoBehaviour
{
    public void AddRigidbody()
    {
        Rigidbody rb = this.gameObject.AddComponent<Rigidbody>();
        rb.mass = 400;
    }

    public void removeRigidbody()
    {
        Rigidbody rb = this.gameObject.GetComponent<Rigidbody>();
        Destroy(rb);
    }
}
