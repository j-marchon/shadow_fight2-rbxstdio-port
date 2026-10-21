// TypeDefIndex 1174
// Namespace: 
// public class GJFEBIOGCEH : QuestAction
// Fields:

// ===== public void .ctor()  [RVA 0x310B288]
// GJFEBIOGCEH$$.ctor @ RVA 0x310B288

void GJFEBIOGCEH___ctor(GJFEBIOGCEH_o *__this,MethodInfo *method)

{
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL MNBMHEAHIIA)  [RVA 0x310B290]
// GJFEBIOGCEH$$MAHFCKJGBPP @ RVA 0x310B290

void GJFEBIOGCEH__MAHFCKJGBPP(GJFEBIOGCEH_o *__this,PKHMIGFEJCL_o *MNBMHEAHIIA,MethodInfo *method)

{
  Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *__this_00;
  
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,MNBMHEAHIIA,(MethodInfo *)0x0);
  __this_00 = Nekki_SF2_GUI_Tutorial_ArrowCanvas__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *)0x0) {
    Nekki_SF2_GUI_Tutorial_ArrowCanvas__HideArrow(__this_00,(MethodInfo *)0x0);
    QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

