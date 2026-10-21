// Nekki.SF2.Core.Fights.ModelContainer$$OnDestroy @ RVA 0x3562188

void Nekki_SF2_Core_Fights_ModelContainer__OnDestroy
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,MethodInfo *method)

{
  int32_t length;
  System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *CJNHFNHJHPE;
  System_Action_OLKKAIFGGAK__o *pSVar1;
  System_Action_o *CJNHFNHJHPE_00;
  System_Collections_Generic_List_OLKKAIFGGAK__o *pSVar2;
  System_Action_OLKKAIFGGAK__o **ppSVar3;
  MethodInfo *in_x2;
  OLKKAIFGGAK_o **ppOVar4;
  OLKKAIFGGAK_o *pOVar5;
  
  if ((DAT_04568bcf & 1) == 0) {
    FUN_01bab630(&System_Action<OLKKAIFGGAK>_TypeInfo);
    FUN_01bab630(&System_Action<OLKKAIFGGAK_EAOIGPODIAI>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_Remove__);
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_ModelContainer_CFOFLMBPNOE__);
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_ModelContainer_MDPKLJJENLO__);
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_ModelContainer_MPICEHINPFC__);
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_ModelContainer_NCCFAEMDMKL__);
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_ModelContainer_<>c_JIFONOGEDJI__);
    FUN_01bab630(&Nekki_SF2_Core_Fights_ModelContainer_<>c_TypeInfo);
    DAT_04568bcf = 1;
  }
  Nekki_SF2_Core_Fights_ModelContainer__OLIFIINLMLJ(__this,false,in_x2);
  ppOVar4 = &(__this->fields).MAODNBMLDEG;
  pOVar5 = *ppOVar4;
  if (pOVar5 == (OLKKAIFGGAK_o *)0x0) {
    return;
  }
  CJNHFNHJHPE = (System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *)
                thunk_FUN_01bda818(System_Action<OLKKAIFGGAK_EAOIGPODIAI>_TypeInfo);
  System_Action<object>___ctor();
  OLKKAIFGGAK__CKHNFICFCKA(pOVar5,CJNHFNHJHPE,(MethodInfo *)0x0);
  pOVar5 = (__this->fields).MAODNBMLDEG;
  pSVar1 = (System_Action_OLKKAIFGGAK__o *)thunk_FUN_01bda818(System_Action<OLKKAIFGGAK>_TypeInfo);
  System_Action<object>___ctor();
  if (pOVar5 != (OLKKAIFGGAK_o *)0x0) {
    OLKKAIFGGAK__EMBAGANBCKF(pOVar5,pSVar1,(MethodInfo *)0x0);
    pOVar5 = (__this->fields).MAODNBMLDEG;
    pSVar1 = (System_Action_OLKKAIFGGAK__o *)thunk_FUN_01bda818(System_Action<OLKKAIFGGAK>_TypeInfo)
    ;
    System_Action<object>___ctor();
    if (pOVar5 != (OLKKAIFGGAK_o *)0x0) {
      OLKKAIFGGAK__LHMMNGOCLFD(pOVar5,pSVar1,(MethodInfo *)0x0);
      pOVar5 = (__this->fields).MAODNBMLDEG;
      CJNHFNHJHPE_00 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      if (pOVar5 != (OLKKAIFGGAK_o *)0x0) {
        OLKKAIFGGAK__FMLFNOKEPPG(pOVar5,CJNHFNHJHPE_00,(MethodInfo *)0x0);
        pSVar2 = (__this->fields).EHJHKEEDKBE;
        if (pSVar2 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
          System_Collections_Generic_List<object>__Remove
                    ((System_Collections_Generic_List_object__o *)pSVar2,(Il2CppObject *)*ppOVar4,
                     Method_System_Collections_Generic_List<OLKKAIFGGAK>_Remove__);
          if (*ppOVar4 != (OLKKAIFGGAK_o *)0x0) {
            OLKKAIFGGAK__PCBMLFDNAOC(*ppOVar4,(MethodInfo *)0x0);
            (__this->fields).MAODNBMLDEG = (OLKKAIFGGAK_o *)0x0;
            thunk_FUN_01c20e04(ppOVar4,0);
            pSVar2 = (__this->fields).EHJHKEEDKBE;
            if ((Nekki_SF2_Core_Fights_ModelContainer_<>c_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pSVar1 = Nekki_SF2_Core_Fights_ModelContainer_<>c_TypeInfo->static_fields->__9__46_0;
            if (pSVar1 == (System_Action_OLKKAIFGGAK__o *)0x0) {
              if ((Nekki_SF2_Core_Fights_ModelContainer_<>c_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pSVar1 = (System_Action_OLKKAIFGGAK__o *)
                       thunk_FUN_01bda818(System_Action<OLKKAIFGGAK>_TypeInfo);
              System_Action<object>___ctor();
              ppSVar3 = &Nekki_SF2_Core_Fights_ModelContainer_<>c_TypeInfo->static_fields->__9__46_0
              ;
              *ppSVar3 = pSVar1;
              thunk_FUN_01c20e04(ppSVar3,pSVar1);
            }
            if (pSVar2 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
              System_Collections_Generic_List<object>__ForEach
                        ((System_Collections_Generic_List_object__o *)pSVar2,
                         (System_Action_T__o *)pSVar1,
                         Method_System_Collections_Generic_List<OLKKAIFGGAK>_ForEach__);
              pSVar2 = (__this->fields).EHJHKEEDKBE;
              if (pSVar2 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
                length = (pSVar2->fields)._size;
                (pSVar2->fields)._size = 0;
                (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
                if (length < 1) {
                  return;
                }
                System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,
                                    (MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

