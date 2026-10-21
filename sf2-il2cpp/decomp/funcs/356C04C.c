// Nekki.SF2.GUI.Menu.MainMenu$$OBKDCGCBNHL @ RVA 0x356C04C

void Nekki_SF2_GUI_Menu_MainMenu__OBKDCGCBNHL
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  src_GUI_Scripts_LerpParams_o **ppsVar1;
  ushort uVar2;
  uint uVar3;
  bool bVar4;
  int32_t iVar5;
  NDPMLPGANCI_o *__this_00;
  System_Collections_Generic_List_object__o *pSVar6;
  GCPFDLNAFDF_o *pGVar7;
  VirtualInvokeData *pVVar8;
  long lVar9;
  CBLABOPKBKD_o *__this_01;
  UnityEngine_GameObject_o *pUVar10;
  Nekki_SF2_GUI_Menu_MenuAdvertisingButton_o *__this_02;
  CBLABOPKBKD_o *DLKMEONGJEO;
  MethodInfo *method_00;
  GCPFDLNAFDF_c *pGVar11;
  System_Object_array *pSVar12;
  ulong uVar13;
  int32_t *piVar14;
  System_Collections_Generic_List_CBLABOPKBKD__o *EDEHNHIHDDH;
  int index;
  Nekki_SF2_GUI_Common_SceneSwitchControls_o *original;
  UnityEngine_Transform_o *parent;
  
  if ((DAT_04568c31 & 1) == 0) {
    FUN_01bab630(&Method_DOCLKKFHECI<CBLABOPKBKD>_DOOBINMKNBI__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<MenuAdvertisingButton>__);
    FUN_01bab630(&HFHIKPAKJFG_TypeInfo);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuAdvertisingButton>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuAdvertisingButton>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CBLABOPKBKD>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CBLABOPKBKD>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<MenuAdvertisingButton>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568c31 = 1;
  }
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (NDPMLPGANCI_o *)0x0) {
    iVar5 = NDPMLPGANCI__FFIOCEOHPEM(__this_00,(MethodInfo *)0x0);
    if ((iVar5 != 3) ||
       ((__this->fields)._F2P_SpacerWidthLerpParams != (src_GUI_Scripts_LerpParams_o *)0x0)) {
      return;
    }
    ppsVar1 = &(__this->fields)._F2P_SpacerWidthLerpParams;
    pSVar6 = (System_Collections_Generic_List_object__o *)
             thunk_FUN_01bda818(System_Collections_Generic_List<MenuAdvertisingButton>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              (pSVar6,Method_System_Collections_Generic_List<MenuAdvertisingButton>__ctor__);
    *ppsVar1 = (src_GUI_Scripts_LerpParams_o *)pSVar6;
    thunk_FUN_01c20e04(ppsVar1,pSVar6);
    if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pGVar7 = IFAMAAGNCBJ__AEJPBJCBICK((MethodInfo *)0x0);
    if (pGVar7 != (GCPFDLNAFDF_o *)0x0) {
      pGVar11 = pGVar7->klass;
      uVar2._0_1_ = (pGVar11->_2).rank;
      uVar2._1_1_ = (pGVar11->_2).minimumAlignment;
      uVar13 = (ulong)uVar2;
      if (uVar13 != 0) {
        piVar14 = &((pGVar11->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
              (Il2CppClass *)HFHIKPAKJFG_TypeInfo) {
            pVVar8 = pGVar11->vtable + *piVar14;
            goto LAB_0366c1d8;
          }
                    /* try { // try from 0366c1b0 to 0376d037 has its CatchHandler @ 0366c1b0
                       catch() { ... } // from try @ 0366c1b0 with catch @ 0366c1b0
                       catch() { ... } // from try @ 03672268 with catch @ 0366c1b0
                       catch() { ... } // from try @ 03672830 with catch @ 0366c1b0
                       catch() { ... } // from try @ 0367291c with catch @ 0366c1b0
                       catch() { ... } // from try @ 03673650 with catch @ 0366c1b0
                       catch() { ... } // from try @ 036736fc with catch @ 0366c1b0
                       catch() { ... } // from try @ 0367377c with catch @ 0366c1b0
                       catch() { ... } // from try @ 03673864 with catch @ 0366c1b0
                       catch() { ... } // from try @ 03673968 with catch @ 0366c1b0 */
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      pVVar8 = (VirtualInvokeData *)FUN_01b81914(pGVar7,HFHIKPAKJFG_TypeInfo,0);
LAB_0366c1d8:
      lVar9 = (*pVVar8->methodPtr)(pGVar7,pVVar8->method);
      if ((lVar9 != 0) &&
         (EDEHNHIHDDH = *(System_Collections_Generic_List_CBLABOPKBKD__o **)(lVar9 + 0x30),
         EDEHNHIHDDH != (System_Collections_Generic_List_CBLABOPKBKD__o *)0x0)) {
        if ((EDEHNHIHDDH->fields)._size < 1) {
          return;
        }
        index = 0;
        while (__this_01 = (CBLABOPKBKD_o *)
                           System_Collections_Generic_List<object>__get_Item
                                     ((System_Collections_Generic_List_object__o *)EDEHNHIHDDH,index
                                      ,
                                      Method_System_Collections_Generic_List<CBLABOPKBKD>_get_Item__
                                     ), __this_01 != (CBLABOPKBKD_o *)0x0) {
          bVar4 = CBLABOPKBKD__FPBFCPPDGNI(__this_01,(MethodInfo *)0x0);
          if ((bVar4) && (bVar4 = CBLABOPKBKD__OBOCLEJEDOC(__this_01,(MethodInfo *)0x0), bVar4)) {
            original = (__this->fields)._SceneSwitchControls;
            parent = (UnityEngine_Transform_o *)(__this->fields)._battlePassProgressBarPrefab;
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            method_00 = Method_UnityEngine_Object_Instantiate<GameObject>__;
            pUVar10 = (UnityEngine_GameObject_o *)
                      UnityEngine_Object__Instantiate<object>
                                ((Il2CppObject *)original,parent,
                                 (MethodInfo_1F1EC6C *)
                                 Method_UnityEngine_Object_Instantiate<GameObject>__);
            if (pUVar10 == (UnityEngine_GameObject_o *)0x0) break;
            __this_02 = (Nekki_SF2_GUI_Menu_MenuAdvertisingButton_o *)
                        UnityEngine_GameObject__GetComponent<object>
                                  (pUVar10,
                                   Method_UnityEngine_GameObject_GetComponent<MenuAdvertisingButton>__
                                  );
            DLKMEONGJEO = Nekki_SF2_GUI_Menu_MainMenu__JGGDCNNJLOL
                                    ((__this_01->fields).ACDDBLNKPCA,EDEHNHIHDDH,method_00);
            if (__this_02 == (Nekki_SF2_GUI_Menu_MenuAdvertisingButton_o *)0x0) break;
            Nekki_SF2_GUI_Menu_MenuAdvertisingButton__Init
                      (__this_02,__this_01,DLKMEONGJEO,(MethodInfo *)0x0);
            pUVar10 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
            if (pUVar10 == (UnityEngine_GameObject_o *)0x0) break;
            UnityEngine_GameObject__SetActive(pUVar10,false,(MethodInfo *)0x0);
            lVar9 = Method_System_Collections_Generic_List<MenuAdvertisingButton>_Add__;
            pSVar6 = (System_Collections_Generic_List_object__o *)*ppsVar1;
            if (pSVar6 == (System_Collections_Generic_List_object__o *)0x0) break;
            pSVar12 = (pSVar6->fields)._items;
            (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
            if (pSVar12 == (System_Object_array *)0x0) break;
            uVar3 = (pSVar6->fields)._size;
            if (uVar3 < (uint)pSVar12->max_length) {
              (pSVar6->fields)._size = uVar3 + 1;
              pSVar12->m_Items[(int)uVar3] = (Il2CppObject *)__this_02;
              thunk_FUN_01c20e04(pSVar12->m_Items + (int)uVar3,__this_02);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (pSVar6,(Il2CppObject *)__this_02,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
          index = index + 1;
          if ((EDEHNHIHDDH->fields)._size <= index) {
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

