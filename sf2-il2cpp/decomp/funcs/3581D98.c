// Nekki.SF2.Core.Scripts.InvertCamera$$.ctor @ RVA 0x3581D98

void Nekki_SF2_Core_Scripts_InvertCamera___ctor
               (Nekki_SF2_Core_Scripts_InvertCamera_o *__this,MethodInfo *method)

{
  (__this->fields)._Scale.fields.z = 1.0;
  (__this->fields)._Scale.fields.x = 1.0;
  (__this->fields)._Scale.fields.y = -1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

