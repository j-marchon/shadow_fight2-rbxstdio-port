// HOOAAGABMBL$$MNKCHHFDEGH @ RVA 0x30EFBFC

int64_t HOOAAGABMBL__MNKCHHFDEGH(HOOAAGABMBL_o *__this,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *pCVar1;
  long lVar2;
  int64_t iVar3;
  int64_t iVar4;
  MethodInfo *method_00;
  float fVar5;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_60;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_40;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031efbe0 with catch @ 031efbfc
                       catch(type#2 @ 00000000) { ... } // from try @ 031efbf4 with catch @ 031efbfc
                        */
  lVar2 = (*(__this->klass->vtable)._6_PDECHBMCBDB.methodPtr)
                    (__this,0,(__this->klass->vtable)._6_PDECHBMCBDB.method);
  pCVar1 = &(__this->fields)._AHMCDBKNKAJ_k__BackingField;
  if (lVar2 == 0) {
    local_60.fields.hiddenValue = (__this->fields)._AHMCDBKNKAJ_k__BackingField.fields.hiddenValue;
    local_60.fields.currentCryptoKey = (pCVar1->fields).currentCryptoKey;
    local_60.fields.fakeValueActive =
         (__this->fields)._AHMCDBKNKAJ_k__BackingField.fields.fakeValueActive;
    local_60.fields.inited = (__this->fields)._AHMCDBKNKAJ_k__BackingField.fields.inited;
    local_60.fields._26_6_ =
         *(undefined6 *)&(__this->fields)._AHMCDBKNKAJ_k__BackingField.fields.field_0x1a;
    local_60.fields.fakeValue = (__this->fields)._AHMCDBKNKAJ_k__BackingField.fields.fakeValue;
    iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_60,(MethodInfo *)0x0)
    ;
  }
  else {
    local_40.fields.hiddenValue = (__this->fields)._AHMCDBKNKAJ_k__BackingField.fields.hiddenValue;
    local_40.fields.currentCryptoKey = (pCVar1->fields).currentCryptoKey;
    local_40.fields.fakeValueActive =
         (__this->fields)._AHMCDBKNKAJ_k__BackingField.fields.fakeValueActive;
    local_40.fields.inited = (__this->fields)._AHMCDBKNKAJ_k__BackingField.fields.inited;
    local_40.fields._26_6_ =
         *(undefined6 *)&(__this->fields)._AHMCDBKNKAJ_k__BackingField.fields.field_0x1a;
    local_40.fields.fakeValue = (__this->fields)._AHMCDBKNKAJ_k__BackingField.fields.fakeValue;
    iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_40,(MethodInfo *)0x0)
    ;
    fVar5 = HOOAAGABMBL__BCNJLJLHHAG(__this,method_00);
    iVar4 = -0x8000000000000000;
    if (fVar5 * (float)iVar3 != INFINITY) {
      iVar4 = (long)(fVar5 * (float)iVar3);
    }
  }
  return iVar4;
}

