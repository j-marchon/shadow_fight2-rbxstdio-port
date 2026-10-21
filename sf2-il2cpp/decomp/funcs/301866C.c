// ECENNHNBAME$$PCPBHJGAOOH @ RVA 0x301866C

bool ECENNHNBAME__PCPBHJGAOOH
               (ECENNHNBAME_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,
               System_Collections_Generic_List_IENLNOEDCFF__o *PBCGCHIKCOE,
               KJFPGDFNFCL_o *FKDOMEBPFPF,MethodInfo *method)

{
  uint uVar1;
  byte bVar2;
  int32_t iVar3;
  KAFMFFDFDBL_o *__this_00;
  long lVar4;
  KJFPGDFNFCL_o **ppKVar5;
  ECENNHNBAME_HJPFANEPGJF_o *pEVar6;
  int index;
  NJPBHDMCLIN_o *pNVar7;
  
  if ((DAT_04565be5 & 1) == 0) {
    FUN_01bab630(&KAFMFFDFDBL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>_get_Item__);
    DAT_04565be5 = 1;
  }
  if ((PBCGCHIKCOE == (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) &&
     ((pEVar6 = (__this->fields).DMGLMCBIAGL, pEVar6 == (ECENNHNBAME_HJPFANEPGJF_o *)0x0 ||
      (PBCGCHIKCOE = (pEVar6->fields).KPFGHBEKJIM,
      PBCGCHIKCOE == (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0)))) {
LAB_03118840:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (0 < (PBCGCHIKCOE->fields)._size) {
    index = 0;
    do {
      __this_00 = (KAFMFFDFDBL_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)PBCGCHIKCOE,index,
                             Method_System_Collections_Generic_List<IENLNOEDCFF>_get_Item__);
      if (__this_00 == (KAFMFFDFDBL_o *)0x0) goto LAB_03118840;
      uVar1 = (__this_00->fields).super.LOAFPIOGJAF;
      lVar4 = (*(__this_00->klass->vtable)._6_BMADCIAHJFL.methodPtr)
                        (__this_00,BCKBBGCOMJD,(ulong)uVar1,
                         (__this_00->klass->vtable)._6_BMADCIAHJFL.method);
      if (lVar4 == 0) {
        return false;
      }
      if (FKDOMEBPFPF != (KJFPGDFNFCL_o *)0x0) {
        pNVar7 = *(NJPBHDMCLIN_o **)(lVar4 + 0x248);
        if (pNVar7 == (NJPBHDMCLIN_o *)0x0) goto LAB_03118840;
        ppKVar5 = &(pNVar7->fields).FKBLDBLGMIH;
        *ppKVar5 = FKDOMEBPFPF;
        thunk_FUN_01c20e04(ppKVar5,FKDOMEBPFPF);
        (FKDOMEBPFPF->fields).KPFGHBEKJIM = pNVar7;
        thunk_FUN_01c20e04(&FKDOMEBPFPF->fields,pNVar7);
      }
      (*(__this_00->klass->vtable)._5_ENEJIHFIBFM.methodPtr)
                (__this_00,1,(__this_00->klass->vtable)._5_ENEJIHFIBFM.method);
      iVar3 = IENLNOEDCFF__NHGGBEACKBD((IENLNOEDCFF_o *)__this_00,(MethodInfo *)0x0);
      if (iVar3 == 8) {
        bVar2 = (KAFMFFDFDBL_TypeInfo->_2).naturalAligment;
        if (((__this_00->klass->_2).naturalAligment < bVar2) ||
           ((__this_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
            (Il2CppClass *)KAFMFFDFDBL_TypeInfo)) {
          (__this_00->fields).super.LOAFPIOGJAF = uVar1;
          return false;
        }
        if (BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) goto LAB_03118840;
        bVar2 = KAFMFFDFDBL__CFANNGPGDPJ
                          (__this_00,(BCKBBGCOMJD->fields).FNEAAHOOHAA,BCKBBGCOMJD,FKDOMEBPFPF,
                           (MethodInfo *)0x0);
      }
      else {
        bVar2 = (*(__this_00->klass->vtable)._8_EPBENPDCBFE.methodPtr)
                          (__this_00,lVar4,__this,(__this_00->klass->vtable)._8_EPBENPDCBFE.method);
      }
      (__this_00->fields).super.LOAFPIOGJAF = uVar1;
      if ((bVar2 & 1) == 0) {
        return false;
      }
      index = index + 1;
    } while (index < (PBCGCHIKCOE->fields)._size);
  }
  return true;
}

