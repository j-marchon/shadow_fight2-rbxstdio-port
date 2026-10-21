// OLKKAIFGGAK$$OIHAEHJGCDA @ RVA 0x34F3ADC

void OLKKAIFGGAK__OIHAEHJGCDA(OLKKAIFGGAK_o *__this,Il2CppObject *DKMMBMBMJBO,MethodInfo *method)

{
  MCIBPLJEFLJ_o *__this_00;
  OLKKAIFGGAK_EAOIGPODIAI_o *pOVar1;
  Il2CppObject **ppIVar2;
  ulong uVar3;
  MethodInfo *method_00;
  System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *pSVar4;
  OPNFCOGALLI_o *pOVar5;
  OLKKAIFGGAK_o *__this_01;
  
  __this_00 = (__this->fields).NKOKFFDMNJF;
  if (__this_00 != (MCIBPLJEFLJ_o *)0x0) {
    MCIBPLJEFLJ__MDPNACCPECM(__this_00,(MethodInfo *)0x0);
    pOVar1 = (__this->fields).PDCHNCOIHHA;
    if (pOVar1 != (OLKKAIFGGAK_EAOIGPODIAI_o *)0x0) {
      ppIVar2 = &(pOVar1->fields).KOANCCDDBDA;
      *ppIVar2 = DKMMBMBMJBO;
      thunk_FUN_01c20e04(ppIVar2,DKMMBMBMJBO);
      pSVar4 = (__this->fields).BBCAMJDDOII;
      if (pSVar4 != (System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *)0x0) {
        method_00 = (MethodInfo *)(pSVar4->fields).super.super.method;
        (*(code *)(pSVar4->fields).super.super.invoke_impl)
                  ((pSVar4->fields).super.super.method_code,(__this->fields).PDCHNCOIHHA);
        __this_01 = (__this->fields).BPJMMBGIMNC;
        if (__this_01 != (OLKKAIFGGAK_o *)0x0) {
          uVar3 = (*(__this->klass->vtable)._9_EEMIOBINNJG.methodPtr)
                            (__this,(__this->klass->vtable)._9_EEMIOBINNJG.method);
          if ((uVar3 & 1) == 0) {
            pOVar5 = (__this->fields).OAKOFJJIOFF;
            if (pOVar5 == (OPNFCOGALLI_o *)0x0) goto LAB_035f3b6c;
            OLKKAIFGGAK__JCIJNPBKMOF(__this_01,(pOVar5->fields).NDBPNFLAKDL,method_00);
            (__this_01->fields).ACFHDECBFOG = 0;
          }
        }
        return;
      }
    }
  }
LAB_035f3b6c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

