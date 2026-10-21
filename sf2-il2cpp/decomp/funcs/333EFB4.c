// AFFHKININGD$$EBKOKBBGNFM @ RVA 0x333EFB4

void AFFHKININGD__EBKOKBBGNFM(AFFHKININGD_o *__this,int32_t HCILIHJHEOM,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  bool_conflict bVar3;
  undefined2 uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  undefined6 uVar7;
  System_Collections_Generic_List_JBCGDIEHOHH__o *__this_00;
  JBCGDIEHOHH_o *__this_01;
  JHBHHHKEFOO_o *pJVar8;
  int64_t iVar9;
  int64_t iVar10;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt_Fields CVar11;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_80;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_60;
  int64_t local_40;
  int64_t iStack_38;
  int64_t iStack_30;
  bool_conflict bStack_28;
  bool_conflict bStack_27;
  undefined6 uStack_26;
  
  if ((DAT_04567987 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JBCGDIEHOHH>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JBCGDIEHOHH>_get_Item__);
    DAT_04567987 = 1;
  }
  __this_00 = (__this->fields).FGAENDJJOGN;
  if (__this_00 != (System_Collections_Generic_List_JBCGDIEHOHH__o *)0x0) {
    iVar1 = (__this_00->fields)._size;
    if (iVar1 < 1) {
      CVar11 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt_Fields)
               CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt__ALBJPLAPOBO(0,(MethodInfo *)0x0);
      (__this->fields).KLLNCGMOIHL.fields = CVar11;
      CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_60,0,(MethodInfo *)0x0);
      iStack_38 = local_60.fields.hiddenValue;
      local_40 = local_60.fields.currentCryptoKey;
      bStack_28 = local_60.fields.fakeValueActive;
      bStack_27 = local_60.fields.inited;
      uStack_26 = local_60.fields._26_6_;
      iStack_30 = local_60.fields.fakeValue;
      (__this->fields).JHCMAOFOCPH.fields.hiddenValue = local_60.fields.hiddenValue;
      (__this->fields).JHCMAOFOCPH.fields.currentCryptoKey = local_60.fields.currentCryptoKey;
      (__this->fields).JHCMAOFOCPH.fields.fakeValueActive = local_60.fields.fakeValueActive;
      (__this->fields).JHCMAOFOCPH.fields.inited = local_60.fields.inited;
      *(undefined6 *)&(__this->fields).JHCMAOFOCPH.fields.field_0x1a = local_60.fields._26_6_;
      (__this->fields).JHCMAOFOCPH.fields.fakeValue = local_60.fields.fakeValue;
      CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_80,0,(MethodInfo *)0x0);
    }
    else {
      __this_01 = (JBCGDIEHOHH_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,iVar1 + -1,
                             Method_System_Collections_Generic_List<JBCGDIEHOHH>_get_Item__);
      if ((__this_01 == (JBCGDIEHOHH_o *)0x0) ||
         (pJVar8 = JBCGDIEHOHH__ALLFNDNBMCO(__this_01,HCILIHJHEOM,(MethodInfo *)0x0),
         pJVar8 == (JHBHHHKEFOO_o *)0x0)) goto LAB_0343f0a4;
      bVar2 = (pJVar8->fields).COAIOPFEFHM.fields.fakeValueActive;
      bVar3 = (pJVar8->fields).COAIOPFEFHM.fields.inited;
      uVar4 = *(undefined2 *)&(pJVar8->fields).COAIOPFEFHM.fields.field_0xe;
      uVar5 = (pJVar8->fields).COAIOPFEFHM.fields.currentCryptoKey;
      uVar6 = (pJVar8->fields).COAIOPFEFHM.fields.hiddenValue;
      (__this->fields).KLLNCGMOIHL.fields.fakeValue = (pJVar8->fields).COAIOPFEFHM.fields.fakeValue;
      (__this->fields).KLLNCGMOIHL.fields.fakeValueActive = bVar2;
      (__this->fields).KLLNCGMOIHL.fields.inited = bVar3;
      *(undefined2 *)&(__this->fields).KLLNCGMOIHL.fields.field_0xe = uVar4;
      (__this->fields).KLLNCGMOIHL.fields.currentCryptoKey = uVar5;
      (__this->fields).KLLNCGMOIHL.fields.hiddenValue = uVar6;
      bVar2 = (pJVar8->fields).DCDLMCEEOCC.fields.fakeValueActive;
      bVar3 = (pJVar8->fields).DCDLMCEEOCC.fields.inited;
      uVar7 = *(undefined6 *)&(pJVar8->fields).DCDLMCEEOCC.fields.field_0x1a;
      iVar9 = (pJVar8->fields).DCDLMCEEOCC.fields.fakeValue;
      iVar10 = (pJVar8->fields).DCDLMCEEOCC.fields.currentCryptoKey;
      (__this->fields).JHCMAOFOCPH.fields.hiddenValue =
           (pJVar8->fields).DCDLMCEEOCC.fields.hiddenValue;
      (__this->fields).JHCMAOFOCPH.fields.currentCryptoKey = iVar10;
      (__this->fields).JHCMAOFOCPH.fields.fakeValueActive = bVar2;
      (__this->fields).JHCMAOFOCPH.fields.inited = bVar3;
      *(undefined6 *)&(__this->fields).JHCMAOFOCPH.fields.field_0x1a = uVar7;
      (__this->fields).JHCMAOFOCPH.fields.fakeValue = iVar9;
      local_80.fields.fakeValueActive = (pJVar8->fields).DJHKCMKJEFP.fields.fakeValueActive;
      local_80.fields.inited = (pJVar8->fields).DJHKCMKJEFP.fields.inited;
      local_80.fields._26_6_ = *(undefined6 *)&(pJVar8->fields).DJHKCMKJEFP.fields.field_0x1a;
      local_80.fields.fakeValue = (pJVar8->fields).DJHKCMKJEFP.fields.fakeValue;
      local_80.fields.hiddenValue = (pJVar8->fields).DJHKCMKJEFP.fields.hiddenValue;
      local_80.fields.currentCryptoKey = (pJVar8->fields).DJHKCMKJEFP.fields.currentCryptoKey;
    }
    (__this->fields).LGLKMANDGPD.fields.hiddenValue = local_80.fields.hiddenValue;
    (__this->fields).LGLKMANDGPD.fields.currentCryptoKey = local_80.fields.currentCryptoKey;
    (__this->fields).LGLKMANDGPD.fields.fakeValueActive = local_80.fields.fakeValueActive;
    (__this->fields).LGLKMANDGPD.fields.inited = local_80.fields.inited;
    *(int6 *)&(__this->fields).LGLKMANDGPD.fields.field_0x1a = local_80.fields._26_6_;
    (__this->fields).LGLKMANDGPD.fields.fakeValue = local_80.fields.fakeValue;
    return;
  }
LAB_0343f0a4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

