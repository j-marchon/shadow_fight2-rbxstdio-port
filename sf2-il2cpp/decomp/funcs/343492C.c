// Nekki.SF2.GUI.Shop.ShopScene$$FHKMIFJBPEN @ RVA 0x343492C

void Nekki_SF2_GUI_Shop_ShopScene__FHKMIFJBPEN
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Nekki_SF2_GUI_Shop_ShopScene_o *__this_00;
  MethodInfo *method_00;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar2;
  DOPEEDABNEK_o *pDVar3;
  System_Collections_Generic_List_HOOAAGABMBL__o *HPACPFLKHPK;
  
  if ((DAT_04568197 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Clear__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568197 = 1;
  }
  pSVar2 = (__this->fields).CAFKGACOEBL;
  if (pSVar2 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    iVar1 = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
    if (0 < iVar1) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,(MethodInfo *)0x0);
    }
    pSVar2 = (__this->fields).HDHLOAOBOIA;
    if (pSVar2 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
      iVar1 = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,(MethodInfo *)0x0);
      }
      pSVar2 = (__this->fields).CDGAHKJEMHM;
      if (pSVar2 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
        iVar1 = (pSVar2->fields)._size;
        (pSVar2->fields)._size = 0;
        (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
        if (0 < iVar1) {
          System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,(MethodInfo *)0x0);
        }
        pSVar2 = (__this->fields).CBGOPJALHHB;
        if (pSVar2 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
          iVar1 = (pSVar2->fields)._size;
          (pSVar2->fields)._size = 0;
          (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
          if (0 < iVar1) {
            System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,(MethodInfo *)0x0)
            ;
          }
          pSVar2 = (__this->fields).LAPBNMPGIEH;
          if (pSVar2 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
            iVar1 = (pSVar2->fields)._size;
            (pSVar2->fields)._size = 0;
            (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
            if (0 < iVar1) {
              System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,
                                  (MethodInfo *)0x0);
            }
            pSVar2 = (__this->fields).NHJBNMACENA;
            if (pSVar2 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
              iVar1 = (pSVar2->fields)._size;
              (pSVar2->fields)._size = 0;
              (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
              if (0 < iVar1) {
                System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,
                                    (MethodInfo *)0x0);
              }
              pSVar2 = (__this->fields).FALDFPJGOMB;
              if (pSVar2 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                iVar1 = (pSVar2->fields)._size;
                (pSVar2->fields)._size = 0;
                (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
                if (0 < iVar1) {
                  System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,
                                      (MethodInfo *)0x0);
                }
                pSVar2 = (__this->fields).EPKOHJKLMIJ;
                if (pSVar2 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                  iVar1 = (pSVar2->fields)._size;
                  (pSVar2->fields)._size = 0;
                  (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
                  if (0 < iVar1) {
                    System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,
                                        (MethodInfo *)0x0);
                  }
                  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  if (DAT_04563eaa == '\0') {
                    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    DAT_04563eaa = '\x01';
                  }
                  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  pDVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
                  if (pDVar3 != (DOPEEDABNEK_o *)0x0) {
                    pSVar2 = (pDVar3->fields).GNCBIPJFEGB;
                    HPACPFLKHPK = (__this->fields).CAFKGACOEBL;
                    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    MGNPHCAAEIO__FHKMIFJBPEN(pSVar2,HPACPFLKHPK,(MethodInfo *)0x0);
                    if (DAT_04563eaa == '\0') {
                      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                      DAT_04563eaa = '\x01';
                    }
                    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    pDVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
                    if (pDVar3 != (DOPEEDABNEK_o *)0x0) {
                      MGNPHCAAEIO__FHKMIFJBPEN
                                ((pDVar3->fields).EIFDIMKJDMN,(__this->fields).HDHLOAOBOIA,
                                 (MethodInfo *)0x0);
                      if (DAT_04563eaa == '\0') {
                        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                        DAT_04563eaa = '\x01';
                      }
                      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564();
                      }
                      pDVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
                      if (pDVar3 != (DOPEEDABNEK_o *)0x0) {
                        MGNPHCAAEIO__FHKMIFJBPEN
                                  ((pDVar3->fields).JKLDGCJAGCF,(__this->fields).CDGAHKJEMHM,
                                   (MethodInfo *)0x0);
                        if (DAT_04563eaa == '\0') {
                          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                          DAT_04563eaa = '\x01';
                        }
                        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                          thunk_FUN_01ba7564();
                        }
                        pDVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
                        if (pDVar3 != (DOPEEDABNEK_o *)0x0) {
                          MGNPHCAAEIO__FHKMIFJBPEN
                                    ((pDVar3->fields).DLDBBBCMJOC,(__this->fields).CBGOPJALHHB,
                                     (MethodInfo *)0x0);
                          if (DAT_04563eaa == '\0') {
                            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                            DAT_04563eaa = '\x01';
                          }
                          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                            thunk_FUN_01ba7564();
                          }
                          pDVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField
                          ;
                          if (pDVar3 != (DOPEEDABNEK_o *)0x0) {
                            MGNPHCAAEIO__FHKMIFJBPEN
                                      ((pDVar3->fields).OGOPJDCOPDF,(__this->fields).LAPBNMPGIEH,
                                       (MethodInfo *)0x0);
                            if (DAT_04563eaa == '\0') {
                              FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                              DAT_04563eaa = '\x01';
                            }
                            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                              thunk_FUN_01ba7564();
                            }
                            pDVar3 = NLPJLHOEAOE_TypeInfo->static_fields->
                                     _IDHKFPFDECA_k__BackingField;
                            if (pDVar3 != (DOPEEDABNEK_o *)0x0) {
                              MGNPHCAAEIO__FHKMIFJBPEN
                                        ((pDVar3->fields).FDLFEJAEDGA,(__this->fields).NHJBNMACENA,
                                         (MethodInfo *)0x0);
                              if (DAT_04563eaa == '\0') {
                                FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                                DAT_04563eaa = '\x01';
                              }
                              if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                                thunk_FUN_01ba7564();
                              }
                              pDVar3 = NLPJLHOEAOE_TypeInfo->static_fields->
                                       _IDHKFPFDECA_k__BackingField;
                              if (pDVar3 != (DOPEEDABNEK_o *)0x0) {
                                MGNPHCAAEIO__FHKMIFJBPEN
                                          ((pDVar3->fields).AGPCBLCIHOM,(__this->fields).NHJBNMACENA
                                           ,(MethodInfo *)0x0);
                                pSVar2 = Nekki_SF2_GUI_Shop_ShopScene__KOPEODKDDDF
                                                   (__this_00,method_00);
                                MGNPHCAAEIO__FHKMIFJBPEN
                                          (pSVar2,(__this->fields).FALDFPJGOMB,(MethodInfo *)0x0);
                                if (DAT_04563eaa == '\0') {
                                  FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                                  DAT_04563eaa = '\x01';
                                }
                                if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                                  thunk_FUN_01ba7564();
                                }
                                pDVar3 = NLPJLHOEAOE_TypeInfo->static_fields->
                                         _IDHKFPFDECA_k__BackingField;
                                if (pDVar3 != (DOPEEDABNEK_o *)0x0) {
                                  MGNPHCAAEIO__FHKMIFJBPEN
                                            ((pDVar3->fields).CLNAOMIIBLH,
                                             (__this->fields).EPKOHJKLMIJ,(MethodInfo *)0x0);
                                  return;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
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

