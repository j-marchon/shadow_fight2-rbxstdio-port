// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityContent.JJFDHHNGKAL$$OBOLNPNGGBH @ RVA 0x348EFE8

float Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_JJFDHHNGKAL__OBOLNPNGGBH
                (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_JJFDHHNGKAL_o *__this,
                JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *container,
                JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *parentContainer,float parentContChance,
                MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *__this_00;
  System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o *pSVar3;
  MethodInfo *method_00;
  float parentContChance_00;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04568405 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_get_Current__
                );
    FUN_01bab630(&Method_IBLAPCINJBO_BDLEIEHBFAD<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_GetEnumerator__
                );
    DAT_04568405 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    parentContChance_00 =
         Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__IHOCHOEKBMB
                   (__this_00,container,parentContainer,parentContChance,(MethodInfo *)0x0);
    if (container != (JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *)0x0) {
      fVar4 = Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_JJFDHHNGKAL__JHIHBFFCHHP
                        (__this,(container->fields).GFBNJPMOEKD,(container->fields).MOIGDPBNMNI,
                         method_00);
      fVar4 = parentContChance_00 * fVar4;
      fVar7 = 1.0;
      if (((fVar4 != 1.0) &&
          (bVar2 = IBLAPCINJBO__BDLEIEHBFAD<object>
                             ((System_Collections_Generic_List_T__o *)
                              (container->fields).BAPMMGFEIDM,
                              Method_IBLAPCINJBO_BDLEIEHBFAD<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>__)
          , fVar7 = fVar4, !bVar2)) && (iVar1 = (container->fields).MOIGDPBNMNI, iVar1 != 3)) {
        if (iVar1 == 2) {
          pSVar3 = (container->fields).BAPMMGFEIDM;
          if (pSVar3 == (System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o *)
                        0x0) goto LAB_0358f268;
          System_Collections_Generic_List<object>__GetEnumerator
                    (&local_88,(System_Collections_Generic_List_object__o *)pSVar3,
                     Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_GetEnumerator__
                    );
          local_70.fields._index = local_88.fields._index;
          local_70.fields._version = local_88.fields._version;
          local_70.fields._list = local_88.fields._list;
          local_70.fields._current = local_88.fields._current;
          fVar7 = 0.0;
          while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                   (&local_70,
                                    Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_MoveNext__
                                   ), bVar2) {
            fVar5 = Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_JJFDHHNGKAL__OBOLNPNGGBH
                              (__this,(JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *)
                                      local_70.fields._current,container,parentContChance_00,
                               method_00);
            fVar6 = fVar7 * (1.0 - fVar5);
            bVar2 = fVar7 != 0.0;
            fVar7 = 1.0 - fVar5;
            if (bVar2) {
              fVar7 = fVar6;
            }
          }
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_70,
                     Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_Dispose__
                    );
          if (fVar7 != 0.0) {
            fVar7 = 1.0 - fVar7;
          }
        }
        else {
          fVar7 = 0.0;
          if (iVar1 == 1) {
            pSVar3 = (container->fields).BAPMMGFEIDM;
            if (pSVar3 == (System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o *)
                          0x0) goto LAB_0358f268;
            System_Collections_Generic_List<object>__GetEnumerator
                      (&local_88,(System_Collections_Generic_List_object__o *)pSVar3,
                       Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_GetEnumerator__
                      );
            fVar7 = 0.0;
            local_70.fields._index = local_88.fields._index;
            local_70.fields._version = local_88.fields._version;
            local_70.fields._list = local_88.fields._list;
            local_70.fields._current = local_88.fields._current;
            while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                     (&local_70,
                                      Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_MoveNext__
                                     ), bVar2) {
              fVar5 = Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_JJFDHHNGKAL__OBOLNPNGGBH
                                (__this,(JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *)
                                        local_70.fields._current,container,parentContChance_00,
                                 method_00);
              fVar7 = fVar7 + fVar5;
            }
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_70,
                       Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_Dispose__
                      );
          }
        }
        fVar7 = 1.0 - (1.0 - fVar4) * (1.0 - fVar7);
      }
      return fVar7;
    }
  }
LAB_0358f268:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

