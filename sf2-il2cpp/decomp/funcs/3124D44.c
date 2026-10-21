// Nekki.SF2.GUI.Profile.AchievementsController$$BNMNJNLMJGO @ RVA 0x3124D44

void Nekki_SF2_GUI_Profile_AchievementsController__BNMNJNLMJGO
               (Nekki_SF2_GUI_Profile_AchievementsController_o *__this,
               System_Collections_Generic_List_KMJDCOABCCG__o *IHEPDIFDBGK,
               System_Collections_Generic_List_EKGDLIKHEMA__o *CNDKPFMIPHH,int32_t MLNEFBDGKEK,
               MethodInfo *method)

{
  int32_t JGGJNLLANAE;
  uint uVar1;
  long lVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  MGNDHCBAPEN_KMJDCOABCCG__int__o *pMVar5;
  MGNDHCBAPEN_KMJDCOABCCG__int__array *pMVar6;
  int iVar7;
  System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *pSVar8;
  int index;
  System_String_o *a;
  
  if ((DAT_04566655 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMJDCOABCCG>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EKGDLIKHEMA>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMJDCOABCCG>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMJDCOABCCG>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EKGDLIKHEMA>_get_Item__);
    FUN_01bab630(&Method_MGNDHCBAPEN<KMJDCOABCCG,_int>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<KMJDCOABCCG,_int>_TypeInfo);
    DAT_04566655 = 1;
  }
  if (CNDKPFMIPHH != (System_Collections_Generic_List_EKGDLIKHEMA__o *)0x0) {
    if (0 < (CNDKPFMIPHH->fields)._size) {
      iVar7 = 0;
      do {
        pIVar4 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)CNDKPFMIPHH,iVar7,
                            Method_System_Collections_Generic_List<EKGDLIKHEMA>_get_Item__);
        if ((pIVar4 == (Il2CppObject *)0x0) ||
           (IHEPDIFDBGK == (System_Collections_Generic_List_KMJDCOABCCG__o *)0x0))
        goto LAB_032250a8;
        if (0 < (IHEPDIFDBGK->fields)._size) {
          a = pIVar4[1].monitor;
          index = 0;
          do {
            pIVar4 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)IHEPDIFDBGK,index,
                                Method_System_Collections_Generic_List<KMJDCOABCCG>_get_Item__);
            if (pIVar4 == (Il2CppObject *)0x0) goto LAB_032250a8;
            if (((*(char *)((long)&pIVar4[4].klass + 2) == '\0') ||
                (*(char *)&pIVar4[4].klass != '\0')) &&
               (bVar3 = System_String__op_Equality
                                  (a,(System_String_o *)pIVar4[2].klass,(MethodInfo *)0x0), bVar3))
            {
              pSVar8 = (__this->fields).OBNPKCCKLIJ;
              JGGJNLLANAE = *(int32_t *)((long)&pIVar4[1].klass + 4);
              pMVar5 = (MGNDHCBAPEN_KMJDCOABCCG__int__o *)
                       thunk_FUN_01bda818(MGNDHCBAPEN<KMJDCOABCCG,_int>_TypeInfo);
              MGNDHCBAPEN<object,_int>___ctor
                        ((MGNDHCBAPEN_T1__T2__o *)pMVar5,pIVar4,JGGJNLLANAE,
                         Method_MGNDHCBAPEN<KMJDCOABCCG,_int>__ctor__);
              lVar2 = Method_System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>_Add__;
              if (pSVar8 == (System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *)0x0)
              goto LAB_032250a8;
              pMVar6 = (pSVar8->fields)._items;
              (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
              if (pMVar6 == (MGNDHCBAPEN_KMJDCOABCCG__int__array *)0x0) goto LAB_032250a8;
              uVar1 = (pSVar8->fields)._size;
              if (uVar1 < (uint)pMVar6->max_length) {
                (pSVar8->fields)._size = uVar1 + 1;
                pMVar6->m_Items[(int)uVar1] = pMVar5;
                thunk_FUN_01c20e04(pMVar6->m_Items + (int)uVar1,pMVar5);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar8,
                           (Il2CppObject *)pMVar5,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              }
              System_Collections_Generic_List<object>__RemoveAt
                        ((System_Collections_Generic_List_object__o *)IHEPDIFDBGK,index,
                         Method_System_Collections_Generic_List<KMJDCOABCCG>_RemoveAt__);
              break;
            }
            index = index + 1;
          } while (index < (IHEPDIFDBGK->fields)._size);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (CNDKPFMIPHH->fields)._size);
    }
    if (IHEPDIFDBGK != (System_Collections_Generic_List_KMJDCOABCCG__o *)0x0) {
      if (0 < (IHEPDIFDBGK->fields)._size) {
        iVar7 = 0;
        do {
          pIVar4 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)IHEPDIFDBGK,iVar7,
                              Method_System_Collections_Generic_List<KMJDCOABCCG>_get_Item__);
          if (pIVar4 == (Il2CppObject *)0x0) goto LAB_032250a8;
          if (*(char *)((long)&pIVar4[4].klass + 2) == '\0') {
LAB_03224fb8:
            pSVar8 = (__this->fields).OBNPKCCKLIJ;
            pIVar4 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)IHEPDIFDBGK,iVar7,
                                Method_System_Collections_Generic_List<KMJDCOABCCG>_get_Item__);
            pMVar5 = (MGNDHCBAPEN_KMJDCOABCCG__int__o *)
                     thunk_FUN_01bda818(MGNDHCBAPEN<KMJDCOABCCG,_int>_TypeInfo);
            MGNDHCBAPEN<object,_int>___ctor
                      ((MGNDHCBAPEN_T1__T2__o *)pMVar5,pIVar4,MLNEFBDGKEK,
                       Method_MGNDHCBAPEN<KMJDCOABCCG,_int>__ctor__);
            lVar2 = Method_System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>_Add__;
            if (pSVar8 == (System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *)0x0)
            goto LAB_032250a8;
            pMVar6 = (pSVar8->fields)._items;
            (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
            if (pMVar6 == (MGNDHCBAPEN_KMJDCOABCCG__int__array *)0x0) goto LAB_032250a8;
            uVar1 = (pSVar8->fields)._size;
            if (uVar1 < (uint)pMVar6->max_length) {
              (pSVar8->fields)._size = uVar1 + 1;
              pMVar6->m_Items[(int)uVar1] = pMVar5;
              thunk_FUN_01c20e04(pMVar6->m_Items + (int)uVar1,pMVar5);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pMVar5,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
            pIVar4 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)IHEPDIFDBGK,iVar7,
                                Method_System_Collections_Generic_List<KMJDCOABCCG>_get_Item__);
            if (pIVar4 == (Il2CppObject *)0x0) goto LAB_032250a8;
            if (MLNEFBDGKEK < *(int *)((long)&pIVar4[1].klass + 4)) {
              return;
            }
          }
          else {
            pIVar4 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)IHEPDIFDBGK,iVar7,
                                Method_System_Collections_Generic_List<KMJDCOABCCG>_get_Item__);
            if (pIVar4 == (Il2CppObject *)0x0) goto LAB_032250a8;
            if (*(char *)&pIVar4[4].klass != '\0') goto LAB_03224fb8;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < (IHEPDIFDBGK->fields)._size);
      }
      return;
    }
  }
LAB_032250a8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

