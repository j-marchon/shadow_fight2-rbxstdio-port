// TypeDefIndex 3059
// Namespace: Nekki.SF2.GUI.Shop
// public abstract class SidePanelContent : MonoBehaviour
// Fields:
//   private bool <DDIEMKPIMAJ>k__BackingField; // 0x20
//   private bool <HLLLGIDPLEN>k__BackingField; // 0x21
//   private bool <JHGIPNHGGOK>k__BackingField; // 0x22
//   private bool <LDBEGKGOHKI>k__BackingField; // 0x23

// ===== public virtual void OnStartOpening()  [RVA 0x34BC23C]
// Nekki.SF2.GUI.Shop.SidePanelContent$$OnStartOpening @ RVA 0x34BC23C

void Nekki_SF2_GUI_Shop_SidePanelContent__OnStartOpening
               (Nekki_SF2_GUI_Shop_SidePanelContent_o *__this,MethodInfo *method)

{
  (__this->fields)._HLLLGIDPLEN_k__BackingField = true;
  (__this->fields)._JHGIPNHGGOK_k__BackingField = false;
  return;
}


// ===== public virtual void OnPanelOpened()  [RVA 0x34BC248]
// Nekki.SF2.GUI.Shop.SidePanelContent$$OnPanelOpened @ RVA 0x34BC248

void Nekki_SF2_GUI_Shop_SidePanelContent__OnPanelOpened
               (Nekki_SF2_GUI_Shop_SidePanelContent_o *__this,MethodInfo *method)

{
  (__this->fields)._DDIEMKPIMAJ_k__BackingField = true;
  (__this->fields)._HLLLGIDPLEN_k__BackingField = false;
  (__this->fields)._JHGIPNHGGOK_k__BackingField = false;
  return;
}


// ===== public bool get_IsOpening()  [RVA 0x34BC258]
// Nekki.SF2.GUI.Shop.SidePanelContent$$get_IsOpening @ RVA 0x34BC258

bool Nekki_SF2_GUI_Shop_SidePanelContent__get_IsOpening
               (Nekki_SF2_GUI_Shop_SidePanelContent_o *__this,MethodInfo *method)

{
  return (__this->fields)._HLLLGIDPLEN_k__BackingField;
}


// ===== public bool get_IsOpened()  [RVA 0x34BC260]
// Nekki.SF2.GUI.Shop.SidePanelContent$$get_IsOpened @ RVA 0x34BC260

bool Nekki_SF2_GUI_Shop_SidePanelContent__get_IsOpened
               (Nekki_SF2_GUI_Shop_SidePanelContent_o *__this,MethodInfo *method)

{
  return (__this->fields)._DDIEMKPIMAJ_k__BackingField;
}


// ===== public virtual void OnEndDragging()  [RVA 0x34BC268]
// Nekki.SF2.GUI.Shop.SidePanelContent$$OnEndDragging @ RVA 0x34BC268

void Nekki_SF2_GUI_Shop_SidePanelContent__OnEndDragging
               (Nekki_SF2_GUI_Shop_SidePanelContent_o *__this,MethodInfo *method)

{
  (__this->fields)._LDBEGKGOHKI_k__BackingField = false;
  return;
}


// ===== public virtual void OnStartDragging()  [RVA 0x34BC270]
// Nekki.SF2.GUI.Shop.SidePanelContent$$OnStartDragging @ RVA 0x34BC270

void Nekki_SF2_GUI_Shop_SidePanelContent__OnStartDragging
               (Nekki_SF2_GUI_Shop_SidePanelContent_o *__this,MethodInfo *method)

{
  (__this->fields)._LDBEGKGOHKI_k__BackingField = true;
  return;
}


// ===== public bool get_IsClosing()  [RVA 0x34BC27C]
// Nekki.SF2.GUI.Shop.SidePanelContent$$get_IsClosing @ RVA 0x34BC27C

bool Nekki_SF2_GUI_Shop_SidePanelContent__get_IsClosing
               (Nekki_SF2_GUI_Shop_SidePanelContent_o *__this,MethodInfo *method)

{
  return (__this->fields)._JHGIPNHGGOK_k__BackingField;
}


// ===== public virtual void OnStartClosing()  [RVA 0x34BC284]
// Nekki.SF2.GUI.Shop.SidePanelContent$$OnStartClosing @ RVA 0x34BC284

void Nekki_SF2_GUI_Shop_SidePanelContent__OnStartClosing
               (Nekki_SF2_GUI_Shop_SidePanelContent_o *__this,MethodInfo *method)

{
  (__this->fields)._HLLLGIDPLEN_k__BackingField = false;
  (__this->fields)._JHGIPNHGGOK_k__BackingField = true;
  return;
}


// ===== private void LFGFIEJACMO(bool CJNHFNHJHPE)  [RVA 0x34BC290]
// Nekki.SF2.GUI.Shop.SidePanelContent$$LFGFIEJACMO @ RVA 0x34BC290

void Nekki_SF2_GUI_Shop_SidePanelContent__LFGFIEJACMO
               (Nekki_SF2_GUI_Shop_SidePanelContent_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._LDBEGKGOHKI_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== private void FNAPNHLIFMF(bool CJNHFNHJHPE)  [RVA 0x34BC29C]
// Nekki.SF2.GUI.Shop.SidePanelContent$$FNAPNHLIFMF @ RVA 0x34BC29C

void Nekki_SF2_GUI_Shop_SidePanelContent__FNAPNHLIFMF
               (Nekki_SF2_GUI_Shop_SidePanelContent_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._JHGIPNHGGOK_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== private void MMJLMDNLIBP(bool CJNHFNHJHPE)  [RVA 0x34BC2A8]
// Nekki.SF2.GUI.Shop.SidePanelContent$$MMJLMDNLIBP @ RVA 0x34BC2A8

void Nekki_SF2_GUI_Shop_SidePanelContent__MMJLMDNLIBP
               (Nekki_SF2_GUI_Shop_SidePanelContent_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._DDIEMKPIMAJ_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public virtual void OnPanelClosed()  [RVA 0x34BC2B4]
// Nekki.SF2.GUI.Shop.SidePanelContent$$OnPanelClosed @ RVA 0x34BC2B4

void Nekki_SF2_GUI_Shop_SidePanelContent__OnPanelClosed
               (Nekki_SF2_GUI_Shop_SidePanelContent_o *__this,MethodInfo *method)

{
  (__this->fields)._DDIEMKPIMAJ_k__BackingField = false;
  (__this->fields)._HLLLGIDPLEN_k__BackingField = false;
  (__this->fields)._JHGIPNHGGOK_k__BackingField = false;
  return;
}


// ===== public bool get_IsDragging()  [RVA 0x34BC2C0]
// Nekki.SF2.GUI.Shop.SidePanelContent$$get_IsDragging @ RVA 0x34BC2C0

bool Nekki_SF2_GUI_Shop_SidePanelContent__get_IsDragging
               (Nekki_SF2_GUI_Shop_SidePanelContent_o *__this,MethodInfo *method)

{
  return (__this->fields)._LDBEGKGOHKI_k__BackingField;
}


// ===== private void JNCANIHKCIN(bool CJNHFNHJHPE)  [RVA 0x34BC2C8]
// Nekki.SF2.GUI.Shop.SidePanelContent$$JNCANIHKCIN @ RVA 0x34BC2C8

void Nekki_SF2_GUI_Shop_SidePanelContent__JNCANIHKCIN
               (Nekki_SF2_GUI_Shop_SidePanelContent_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._HLLLGIDPLEN_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== protected void .ctor()  [RVA 0x34BC2D4]
// Nekki.SF2.GUI.Shop.SidePanelContent$$.ctor @ RVA 0x34BC2D4

void Nekki_SF2_GUI_Shop_SidePanelContent___ctor
               (Nekki_SF2_GUI_Shop_SidePanelContent_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

