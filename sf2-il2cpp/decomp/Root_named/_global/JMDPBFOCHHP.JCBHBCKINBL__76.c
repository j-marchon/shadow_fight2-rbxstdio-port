// TypeDefIndex 76
// Namespace: 
// [CompilerGenerated]
// private sealed class RaidConfig.JCBHBCKINBL
// Fields:
//   public bool lowerCaseComparison; // 0x10
//   public string name; // 0x18

// ===== public void .ctor()  [RVA 0x2FF71FC]
// RaidConfig.JCBHBCKINBL$$.ctor @ RVA 0x2FF71FC

void RaidConfig_JCBHBCKINBL___ctor(RaidConfig_JCBHBCKINBL_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool IJBIJOFGJKM(RaidConfig.ENBCJNLAHAC pack)  [RVA 0x2FFC304]
// RaidConfig.JCBHBCKINBL$$IJBIJOFGJKM @ RVA 0x2FFC304

bool RaidConfig_JCBHBCKINBL__IJBIJOFGJKM
               (RaidConfig_JCBHBCKINBL_o *__this,RaidConfig_ENBCJNLAHAC_o *pack,MethodInfo *method
               )

{
  bool bVar1;
  System_String_o *__this_00;
  
  if (pack != (RaidConfig_ENBCJNLAHAC_o *)0x0) {
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

