// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesLeaderboard$$HGLBPOAFPKC @ RVA 0x34771F8

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__HGLBPOAFPKC
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *__this,int32_t JDEFJPHCNMM,
               MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int32_t iVar3;
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *__this_01;
  UnityEngine_GameObject_o *CMMIJCJOBBF;
  System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *__this_02;
  Il2CppObject *pIVar4;
  System_Collections_Generic_Dictionary_int__object__o *pSVar5;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *source;
  System_Collections_Generic_List_TSource__o *__this_03;
  int NOBEFHEECKJ;
  JMDPBFOCHHP_CMLEEJPGHNC_o *pJVar6;
  
  if ((DAT_0456832e & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_HKDMLOKOJPH>_ContainsKey__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_HKDMLOKOJPH>_get_Keys__
                );
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<int>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_IndexOf__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_get_Item__
                );
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_TypeInfo);
    FUN_01bab630(&StringLiteral_10900);
    DAT_0456832e = 1;
  }
  __this_00 = (__this->fields).PDHMLFAMNCO;
  if ((__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) &&
     (__this_01 = (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *)
                  Nekki_SF2_GUI_SimpleScroll__AddItemFromPool
                            (__this_00,false,StringLiteral_10900,(MethodInfo *)0x0),
     __this_01 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *)0x0)) {
    bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (__this_01->klass->_2).naturalAligment) &&
       ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_TypeInfo)) {
      CMMIJCJOBBF = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
      Util__IHPDCBOFHPA(CMMIJCJOBBF,true,(MethodInfo *)0x0);
      (*(__this_01->klass->vtable)._55_ReInit.methodPtr)
                (__this_01,(__this_01->klass->vtable)._55_ReInit.method);
      (__this_01->fields).PBIDKAAGKLB = __this;
      thunk_FUN_01c20e04(&(__this_01->fields).PBIDKAAGKLB,__this);
      (__this_01->fields).LLLCBLJMPIH = (__this->fields).LLLCBLJMPIH;
      thunk_FUN_01c20e04(&(__this_01->fields).LLLCBLJMPIH);
      __this_02 = (__this->fields).JKBONEFMACI;
      if (__this_02 != (System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *)0x0)
      {
        pIVar4 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_02,JDEFJPHCNMM,
                            Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_get_Item__
                           );
        (*(__this_01->klass->vtable)._52_UpdateView.methodPtr)
                  (__this_01,pIVar4,(__this_01->klass->vtable)._52_UpdateView.method);
        pSVar5 = (System_Collections_Generic_Dictionary_int__object__o *)
                 (__this->fields).OCKAMMNDKCJ;
        if (pSVar5 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          bVar2 = System_Collections_Generic_Dictionary<int,_object>__ContainsKey
                            (pSVar5,JDEFJPHCNMM,
                             Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_HKDMLOKOJPH>_ContainsKey__
                            );
          if ((pIVar4 == (Il2CppObject *)0x0) || (!bVar2)) {
            Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__OriginateHeight
                      (__this_01,(MethodInfo *)0x0);
            return;
          }
          pSVar5 = (System_Collections_Generic_Dictionary_int__object__o *)
                   (__this->fields).OCKAMMNDKCJ;
          if (pSVar5 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
            source = System_Collections_Generic_Dictionary<int,_object>__get_Keys
                               (pSVar5,
                                Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_HKDMLOKOJPH>_get_Keys__
                               );
            __this_03 = System_Linq_Enumerable__ToList<int>
                                  ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                                   Method_System_Linq_Enumerable_ToList<int>__);
            if (__this_03 != (System_Collections_Generic_List_TSource__o *)0x0) {
              iVar3 = System_Collections_Generic_List<int>__IndexOf
                                ((System_Collections_Generic_List_int__o *)__this_03,JDEFJPHCNMM,
                                 Method_System_Collections_Generic_List<int>_IndexOf__);
              pJVar6 = (__this->fields).LLLCBLJMPIH;
              if (pJVar6 != (JMDPBFOCHHP_CMLEEJPGHNC_o *)0x0) {
                if (*(int *)&pIVar4[2].klass < (pJVar6->fields).AKAGFOOMLFB) {
                  NOBEFHEECKJ = 0;
                }
                else {
                  NOBEFHEECKJ = iVar3 + 1;
                }
                Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__ShowRewardPlate
                          (__this_01,NOBEFHEECKJ,(MethodInfo *)0x0);
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

