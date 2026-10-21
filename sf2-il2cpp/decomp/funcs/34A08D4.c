// CMDDLMAPPMD$$EPBENPDCBFE @ RVA 0x34A08D4

bool CMDDLMAPPMD__EPBENPDCBFE
               (CMDDLMAPPMD_o *__this,NKPJLEMPIKD_GBBCKIANDCN_o *PHCGJGCHKCM,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  int32_t iVar5;
  Il2CppObject *value;
  int64_t iVar6;
  long lVar7;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if ((DAT_04568497 & 1) == 0) {
    FUN_01bab630(&System_Convert_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_object>_TypeInfo);
    FUN_01bab630(&StringLiteral_12409);
    DAT_04568497 = 1;
  }
  bVar3 = NKPJLEMPIKD__EPBENPDCBFE((NKPJLEMPIKD_o *)__this,PHCGJGCHKCM,(MethodInfo *)0x0);
  bVar4 = false;
  if ((PHCGJGCHKCM != (NKPJLEMPIKD_GBBCKIANDCN_o *)0x0) && (bVar3)) {
    if ((PHCGJGCHKCM->fields).IGMDDJFPIJL == (Il2CppObject *)0x0) {
      bVar4 = false;
    }
    else {
      iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (__this->fields)._GOMOBAPCMOM_k__BackingField.fields,(MethodInfo *)0x0);
      if ((iVar5 == 0) ||
         (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                      (PHCGJGCHKCM->fields).IGMDDJFPIJL,
         __this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
        bVar4 = true;
      }
      else {
        bVar1 = (System_Collections_Generic_Dictionary<string,_object>_TypeInfo->_2).naturalAligment
        ;
        if (((__this_00->klass->_2).naturalAligment < bVar1) ||
           ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Collections_Generic_Dictionary<string,_object>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(__this_00);
        }
        bVar4 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                          (__this_00,StringLiteral_12409,
                           Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__
                          );
        if (bVar4) {
          value = System_Collections_Generic_Dictionary<object,_object>__get_Item
                            (__this_00,StringLiteral_12409,
                             Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__
                            );
          if ((System_Convert_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(System_Convert_TypeInfo);
          }
          iVar6 = System_Convert__ToInt64(value,(MethodInfo *)0x0);
        }
        else {
          iVar6 = 0;
        }
        iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           (__this->fields)._GOMOBAPCMOM_k__BackingField.fields,(MethodInfo *)0x0);
        lVar7 = (long)iVar5;
        lVar2 = 0;
        if (lVar7 != 0) {
          lVar2 = iVar6 / lVar7;
        }
        bVar4 = iVar6 == lVar2 * lVar7;
      }
    }
  }
  return bVar4;
}

