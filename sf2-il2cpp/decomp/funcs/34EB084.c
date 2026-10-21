// OLKKAIFGGAK$$LBKJFCHJPGP @ RVA 0x34EB084

void OLKKAIFGGAK__LBKJFCHJPGP(OLKKAIFGGAK_o *__this,Il2CppObject *DKMMBMBMJBO,MethodInfo *method)

{
  undefined4 uVar1;
  byte bVar2;
  bool bVar3;
  OLKKAIFGGAK_EAOIGPODIAI_o *pOVar4;
  Il2CppObject **ppIVar5;
  MethodInfo *method_00;
  System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *pSVar6;
  Il2CppClass *pIVar7;
  
  if ((DAT_0456878f & 1) == 0) {
    FUN_01bab630(&ECENNHNBAME_TypeInfo);
    DAT_0456878f = 1;
  }
  pOVar4 = (__this->fields).PDCHNCOIHHA;
  if (pOVar4 != (OLKKAIFGGAK_EAOIGPODIAI_o *)0x0) {
    ppIVar5 = &(pOVar4->fields).KOANCCDDBDA;
    *ppIVar5 = DKMMBMBMJBO;
    thunk_FUN_01c20e04(ppIVar5,DKMMBMBMJBO);
    if (DKMMBMBMJBO != (Il2CppObject *)0x0) {
      bVar2 = (ECENNHNBAME_TypeInfo->_2).naturalAligment;
      if ((bVar2 <= (DKMMBMBMJBO->klass->_2).naturalAligment) &&
         ((DKMMBMBMJBO->klass->_2).typeHierarchy[(ulong)bVar2 - 1] ==
          (Il2CppClass *)ECENNHNBAME_TypeInfo)) {
        bVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                           *(CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields *)
                            (DKMMBMBMJBO + 9),(MethodInfo *)0x0);
        if (bVar3) {
          uVar1 = *(undefined4 *)&DKMMBMBMJBO[9].monitor;
          pIVar7 = DKMMBMBMJBO[9].klass;
          (__this->fields).ICELCCKEFOJ.fields.fakeValue = (bool_conflict)(char)uVar1;
          (__this->fields).ICELCCKEFOJ.fields.inited = (bool_conflict)(char)((uint)uVar1 >> 8);
          (__this->fields).ICELCCKEFOJ.fields.fakeValueActive =
               (bool_conflict)(char)((uint)uVar1 >> 0x10);
          (__this->fields).ICELCCKEFOJ.fields.field_0xb = (char)((uint)uVar1 >> 0x18);
          *(Il2CppClass **)&(__this->fields).ICELCCKEFOJ.fields = pIVar7;
        }
        OLKKAIFGGAK__KFJJOIHBPEF(__this,method_00);
        pSVar6 = (__this->fields).LKGKDIMGDHL;
        if (pSVar6 != (System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x035eb14c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(pSVar6->fields).super.super.invoke_impl)
                    ((pSVar6->fields).super.super.method_code,(__this->fields).PDCHNCOIHHA,
                     (pSVar6->fields).super.super.method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

