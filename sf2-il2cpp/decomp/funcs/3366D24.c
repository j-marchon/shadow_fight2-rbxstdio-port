// CJFBGEEIPBA$$KCBCIBLCNKD @ RVA 0x3366D24

void CJFBGEEIPBA__KCBCIBLCNKD(CJFBGEEIPBA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  long lVar3;
  CPNHNIKFGFB_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  void *OILECKFDMDB;
  Il2CppObject *pIVar4;
  
  method_00 = (MethodInfo *)IDCGLBOIAFJ;
  if ((DAT_04567ac3 & 1) == 0) {
    FUN_01bab630(&System_Action<long>_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<Int64Value>__);
    FUN_01bab630(&StringLiteral_17041);
    DAT_04567ac3 = 1;
    method_00 = extraout_x1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,method_00);
    if (bVar1) {
      pIVar4 = (IDCGLBOIAFJ->fields)._GOFDPKCMIJO_k__BackingField;
      pIVar2 = KEFHDOHHHML__PFNEPJAFEDF<object>
                         (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<Int64Value>__);
      if (pIVar2 != (Il2CppObject *)0x0) {
        OILECKFDMDB = pIVar2[1].monitor;
        lVar3 = thunk_FUN_01bda71c(pIVar4,System_Action<long>_TypeInfo);
        if (lVar3 != 0) {
          method = *(MethodInfo **)(lVar3 + 0x28);
          (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),OILECKFDMDB);
        }
        CJFBGEEIPBA__MDGNOGCEMDN(__this,(int64_t)OILECKFDMDB,method);
        return;
      }
    }
    else {
      __this_00 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_00 != (CPNHNIKFGFB_o *)0x0) {
        CPNHNIKFGFB__DIGPCFKCCBK
                  (__this_00,(IDCGLBOIAFJ->fields)._JOCIAOOICNM_k__BackingField,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__LogError(StringLiteral_17041,(MethodInfo *)0x0);
  return;
}

