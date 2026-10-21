// TypeDefIndex 1013
// Namespace: Nekki.SF2.GUI
// public abstract class UIInitializable : MonoBehaviour
// Fields:
//   private bool <BLOJFJIFDAE>k__BackingField; // 0x20
//   private bool <BOGAKJOFOEK>k__BackingField; // 0x21

// ===== protected bool AAENFELBKDD()  [RVA 0x30C4AC8]
// Nekki.SF2.GUI.UIInitializable$$AAENFELBKDD @ RVA 0x30C4AC8

bool Nekki_SF2_GUI_UIInitializable__AAENFELBKDD
               (Nekki_SF2_GUI_UIInitializable_o *__this,MethodInfo *method)

{
  return (__this->fields)._BLOJFJIFDAE_k__BackingField;
}


// ===== protected void .ctor()  [RVA 0x30C4AD0]
// Nekki.SF2.GUI.UIInitializable$$.ctor @ RVA 0x30C4AD0

void Nekki_SF2_GUI_UIInitializable___ctor
               (Nekki_SF2_GUI_UIInitializable_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void GCGMACNOCJA(bool CJNHFNHJHPE)  [RVA 0x30C4AD8]
// Nekki.SF2.GUI.UIInitializable$$GCGMACNOCJA @ RVA 0x30C4AD8

void Nekki_SF2_GUI_UIInitializable__GCGMACNOCJA
               (Nekki_SF2_GUI_UIInitializable_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._BOGAKJOFOEK_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== protected bool NMLJIAKJOPO()  [RVA 0x30C4AE4]
// Nekki.SF2.GUI.UIInitializable$$NMLJIAKJOPO @ RVA 0x30C4AE4

bool Nekki_SF2_GUI_UIInitializable__NMLJIAKJOPO
               (Nekki_SF2_GUI_UIInitializable_o *__this,MethodInfo *method)

{
  return (__this->fields)._BOGAKJOFOEK_k__BackingField;
}


// ===== public void Free()  [RVA 0x30C4AEC]
// Nekki.SF2.GUI.UIInitializable$$Free @ RVA 0x30C4AEC

void Nekki_SF2_GUI_UIInitializable__Free(Nekki_SF2_GUI_UIInitializable_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_UIInitializable_c *pNVar1;
  
  if (((__this->fields)._BLOJFJIFDAE_k__BackingField != false) &&
     ((__this->fields)._BOGAKJOFOEK_k__BackingField == false)) {
    pNVar1 = __this->klass;
    (__this->fields)._BOGAKJOFOEK_k__BackingField = true;
                    /* WARNING: Could not recover jumptable at 0x031c4b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pNVar1->vtable)._4_unknown.methodPtr)(__this,(pNVar1->vtable)._4_unknown.method);
    return;
  }
  return;
}


// ===== public void Init()  [RVA 0x30C4B14]
// Nekki.SF2.GUI.UIInitializable$$Init @ RVA 0x30C4B14

void Nekki_SF2_GUI_UIInitializable__Init(Nekki_SF2_GUI_UIInitializable_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_UIInitializable_c *pNVar1;
  
  if ((__this->fields)._BLOJFJIFDAE_k__BackingField != false) {
    return;
  }
  pNVar1 = __this->klass;
  (__this->fields)._BLOJFJIFDAE_k__BackingField = true;
                    /* WARNING: Could not recover jumptable at 0x031c4b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pNVar1->vtable)._5_unknown.methodPtr)(__this,(pNVar1->vtable)._5_unknown.method);
  return;
}


// ===== private void DJFCNGEEPLN(bool CJNHFNHJHPE)  [RVA 0x30C4B34]
// Nekki.SF2.GUI.UIInitializable$$DJFCNGEEPLN @ RVA 0x30C4B34

void Nekki_SF2_GUI_UIInitializable__DJFCNGEEPLN
               (Nekki_SF2_GUI_UIInitializable_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._BLOJFJIFDAE_k__BackingField = CJNHFNHJHPE;
  return;
}

