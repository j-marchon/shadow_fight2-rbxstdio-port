// TypeDefIndex 76
// Namespace: 
// [CompilerGenerated]
// private sealed class JMDPBFOCHHP.JCBHBCKINBL
// Fields:
//   public bool lowerCaseComparison; // 0x10
//   public string name; // 0x18

// ===== public void .ctor()  [RVA 0x2FF71FC]
// JMDPBFOCHHP.JCBHBCKINBL$$.ctor @ RVA 0x2FF71FC

void JMDPBFOCHHP_JCBHBCKINBL___ctor(JMDPBFOCHHP_JCBHBCKINBL_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool IJBIJOFGJKM(JMDPBFOCHHP.ENBCJNLAHAC pack)  [RVA 0x2FFC304]
// JMDPBFOCHHP.JCBHBCKINBL$$IJBIJOFGJKM @ RVA 0x2FFC304

bool JMDPBFOCHHP_JCBHBCKINBL__IJBIJOFGJKM
               (JMDPBFOCHHP_JCBHBCKINBL_o *__this,JMDPBFOCHHP_ENBCJNLAHAC_o *pack,MethodInfo *method
               )

{
  bool bVar1;
  System_String_o *__this_00;
  
  if (pack != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
    __this_00 = (pack->fields).JIJLBFGKNJK;
    if ((__this->fields).lowerCaseComparison != false) {
      if (__this_00 == (System_String_o *)0x0) goto LAB_030fc338;
      __this_00 = System_String__ToLower(__this_00,(MethodInfo *)0x0);
    }
    bVar1 = System_String__op_Equality(__this_00,(__this->fields).name,(MethodInfo *)0x0);
    return bVar1;
  }
LAB_030fc338:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

