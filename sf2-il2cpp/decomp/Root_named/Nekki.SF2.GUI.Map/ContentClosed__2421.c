// TypeDefIndex 2421
// Namespace: Nekki.SF2.GUI.Map
// public class ContentClosed : ContentBase
// Fields:
//   protected LabelAlias _lblDescription; // 0x28

// ===== public void Init(string CAGDPKDHJCA)  [RVA 0x333B52C]
// Nekki.SF2.GUI.Map.ContentClosed$$Init @ RVA 0x333B52C

void Nekki_SF2_GUI_Map_ContentClosed__Init
               (Nekki_SF2_GUI_Map_ContentClosed_o *__this,System_String_o *CAGDPKDHJCA,
               MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  
  __this_00 = (__this->fields)._lblDescription;
  if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,CAGDPKDHJCA,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x333B548]
// Nekki.SF2.GUI.Map.ContentClosed$$.ctor @ RVA 0x333B548

void Nekki_SF2_GUI_Map_ContentClosed___ctor
               (Nekki_SF2_GUI_Map_ContentClosed_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_ContentBase___ctor((Nekki_SF2_GUI_Map_ContentBase_o *)__this,(MethodInfo *)0x0);
  return;
}

