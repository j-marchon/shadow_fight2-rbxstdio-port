// OLKKAIFGGAK$$MHPDMDPNBGD @ RVA 0x34E8B54

void OLKKAIFGGAK__MHPDMDPNBGD(OLKKAIFGGAK_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  System_Collections_Generic_List_OIGAJAKPPEO__o *__this_00;
  OLKKAIFGGAK_o *__this_01;
  MethodInfo *method_00;
  int index;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_68;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_50;
  
  if ((DAT_04568777 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<OIGAJAKPPEO>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OIGAJAKPPEO>_get_Item__);
    DAT_04568777 = 1;
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_68,CJNHFNHJHPE,
             (MethodInfo *)0x0);
  local_50.fakeValueActive = local_68.fakeValueActive;
  local_50.inited = local_68.inited;
  local_50._18_2_ = local_68._18_2_;
  local_50.hiddenValueOldByte4.fields = local_68.hiddenValueOldByte4.fields;
  local_50.fakeValue = local_68.fakeValue;
  local_50.currentCryptoKey = local_68.currentCryptoKey;
  local_50.hiddenValue = local_68.hiddenValue;
  (__this->fields).MELGPJOCIGE.fields.fakeValueActive = local_68.fakeValueActive;
  (__this->fields).MELGPJOCIGE.fields.inited = local_68.inited;
  *(undefined2 *)&(__this->fields).MELGPJOCIGE.fields.field_0x12 = local_68._18_2_;
  (__this->fields).MELGPJOCIGE.fields.hiddenValueOldByte4 =
       (CodeStage_AntiCheat_Common_ACTkByte4_o)local_68.hiddenValueOldByte4.fields;
  (__this->fields).MELGPJOCIGE.fields.fakeValue = local_68.fakeValue;
  (__this->fields).MELGPJOCIGE.fields.currentCryptoKey = local_68.currentCryptoKey;
  (__this->fields).MELGPJOCIGE.fields.hiddenValue = local_68.hiddenValue;
  __this_00 = (__this->fields).MPLCPGJEHPG;
  if (__this_00 != (System_Collections_Generic_List_OIGAJAKPPEO__o *)0x0) {
    index = 0;
    do {
      if ((__this_00->fields)._size <= index) {
        return;
      }
      __this_01 = (OLKKAIFGGAK_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,index,
                             Method_System_Collections_Generic_List<OIGAJAKPPEO>_get_Item__);
      if (__this_01 == (OLKKAIFGGAK_o *)0x0) break;
      OLKKAIFGGAK__MHPDMDPNBGD(__this_01,CJNHFNHJHPE,method_00);
      __this_00 = (__this->fields).MPLCPGJEHPG;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_OIGAJAKPPEO__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

