// TypeDefIndex 1075
// Namespace: 
// [CompilerGenerated]
// private sealed class ValueLine.FPFALLJLCCC
// Fields:
//   public ValueLine <>4__this; // 0x10
//   public NumberFormatInfo f; // 0x18

// ===== internal void JFODEOJOHGB(long x)  [RVA 0x30DF800]
// Nekki.SF2.GUI.Fight.ValueLine.FPFALLJLCCC$$JFODEOJOHGB @ RVA 0x30DF800

void Nekki_SF2_GUI_Fight_ValueLine_FPFALLJLCCC__JFODEOJOHGB
               (Nekki_SF2_GUI_Fight_ValueLine_FPFALLJLCCC_o *__this,int64_t x,MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_ValueLine_o *pNVar1;
  int64_t *__this_00;
  System_String_o *CJNHFNHJHPE;
  Nekki_SF2_GUI_Fight_IconAndText_o *__this_01;
  
  if ((DAT_04566390 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9281/*"N0"*/);
    DAT_04566390 = 1;
  }
  pNVar1 = (__this->fields).__4__this;
  if (pNVar1 != (Nekki_SF2_GUI_Fight_ValueLine_o *)0x0) {
    __this_00 = &(pNVar1->fields).MCFPIEOBLLM;
    *__this_00 = x;
    __this_01 = (pNVar1->fields).valueLabel;
    CJNHFNHJHPE = System_Int64__ToString
                            ((int64_t)__this_00,StringLiteral_9281/*"N0"*/,
                             (System_IFormatProvider_o *)(__this->fields).f,(MethodInfo *)0x0);
    if (__this_01 != (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) {
      Nekki_SF2_GUI_Fight_IconAndText__SetText(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal long FBJDHDNHOAC()  [RVA 0x30DF878]
// Nekki.SF2.GUI.Fight.ValueLine.FPFALLJLCCC$$FBJDHDNHOAC @ RVA 0x30DF878

int64_t Nekki_SF2_GUI_Fight_ValueLine_FPFALLJLCCC__FBJDHDNHOAC
                  (Nekki_SF2_GUI_Fight_ValueLine_FPFALLJLCCC_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_ValueLine_o *pNVar1;
  
  pNVar1 = (__this->fields).__4__this;
  if (pNVar1 != (Nekki_SF2_GUI_Fight_ValueLine_o *)0x0) {
    return (pNVar1->fields).MCFPIEOBLLM;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x30DF3AC]
// Nekki.SF2.GUI.Fight.ValueLine.FPFALLJLCCC$$.ctor @ RVA 0x30DF3AC

void Nekki_SF2_GUI_Fight_ValueLine_FPFALLJLCCC___ctor
               (Nekki_SF2_GUI_Fight_ValueLine_FPFALLJLCCC_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal void NCOHGDFHGHK()  [RVA 0x30DF894]
// Nekki.SF2.GUI.Fight.ValueLine.FPFALLJLCCC$$NCOHGDFHGHK @ RVA 0x30DF894

void Nekki_SF2_GUI_Fight_ValueLine_FPFALLJLCCC__NCOHGDFHGHK
               (Nekki_SF2_GUI_Fight_ValueLine_FPFALLJLCCC_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  Nekki_SF2_GUI_Fight_ValueLine_o *pNVar1;
  
  pNVar1 = (__this->fields).__4__this;
  if ((pNVar1 != (Nekki_SF2_GUI_Fight_ValueLine_o *)0x0) &&
     (__this_00 = (pNVar1->fields).JLKPBAGACID, __this_00 != (UnityEngine_Events_UnityEvent_o *)0x0)
     ) {
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

