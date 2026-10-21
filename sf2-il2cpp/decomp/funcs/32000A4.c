// NLPJLHOEAOE$$FNPHMBNNKEJ @ RVA 0x32000A4

/* WARNING: Removing unreachable block (ram,0x033005dc) */

void NLPJLHOEAOE__FNPHMBNNKEJ(NLPJLHOEAOE_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  Il2CppObject *__this_00;
  bool bVar3;
  System_String_o *pSVar4;
  System_Xml_XmlDocument_o *pSVar5;
  long *plVar6;
  undefined8 *puVar7;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  MEJIKMPNBNL_o *pMVar8;
  System_Collections_Generic_List_AFFHKININGD__o *__this_01;
  System_String_o *BANHBMINMMP;
  System_String_o *MHOFCOHFCGL;
  ACHLOMELAJE_o *__this_02;
  PAMEPBLOLPB_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  long lVar9;
  MEJIKMPNBNL_array *pMVar10;
  ulong uVar11;
  int *piVar12;
  System_Xml_XmlDocument_o **ppSVar13;
  System_Collections_Generic_List_MEJIKMPNBNL__o *__this_03;
  DNELIPCHKLK_o *__this_04;
  OOMHDDBCBJP_o *pOVar14;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04566e10 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_get_Current__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MEJIKMPNBNL>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_12336);
    FUN_01bab630(&StringLiteral_15314);
    FUN_01bab630(&StringLiteral_21186);
    DAT_04566e10 = 1;
    method = extraout_x1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo,method);
  }
  pSVar4 = MGENAMAJALB__GNOADHJNPCJ((MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x1;
  pSVar5 = GIAMPEGMNHE__IBJOMPOLPCC(pSVar4,StringLiteral_21186,1,true,true,false,(MethodInfo *)0x0);
  ppSVar13 = &(__this->fields).POMPJGMJEDE;
  *ppSVar13 = pSVar5;
  thunk_FUN_01c20e04(ppSVar13,pSVar5);
  pSVar5 = *ppSVar13;
  if ((((pSVar5 != (System_Xml_XmlDocument_o *)0x0) &&
       (plVar6 = (long *)(*(pSVar5->klass->vtable)._51_get_Item.methodPtr)
                                   (pSVar5,StringLiteral_12336,
                                    (pSVar5->klass->vtable)._51_get_Item.method),
       plVar6 != (long *)0x0)) &&
      (plVar6 = (long *)(**(code **)(*plVar6 + 0x468))
                                  (plVar6,StringLiteral_15314,*(undefined8 *)(*plVar6 + 0x470)),
      plVar6 != (long *)0x0)) &&
     (plVar6 = (long *)(**(code **)(*plVar6 + 0x208))(plVar6,*(undefined8 *)(*plVar6 + 0x210)),
     plVar6 != (long *)0x0)) {
    plVar6 = (long *)(**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar9 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_033002ac;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_033002ac:
      uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if ((uVar11 & 1) == 0) {
        plVar6 = (long *)thunk_FUN_01bda71c(plVar6,System_IDisposable_TypeInfo);
        if (plVar6 == (long *)0x0) goto LAB_03300430;
        lVar9 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 == 0) goto LAB_03300408;
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_033003f0;
      }
      lVar9 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_0330030c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,1);
LAB_0330030c:
      AHDGNOJPPIB = (System_Xml_XmlNode_o *)(*(code *)*puVar7)(plVar6,puVar7[1]);
      if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((AHDGNOJPPIB->klass->_2).naturalAligment < bVar1) ||
           ((AHDGNOJPPIB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(AHDGNOJPPIB);
        }
      }
      __this_03 = (__this->fields).LBGLAKOLFAC;
      pMVar8 = NLPJLHOEAOE__CAAFPEGICAI(__this,AHDGNOJPPIB,false,method_00);
      lVar9 = Method_System_Collections_Generic_List<MEJIKMPNBNL>_Add__;
      if (__this_03 == (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pMVar10 = (__this_03->fields)._items;
      (__this_03->fields)._version = (__this_03->fields)._version + 1;
      if (pMVar10 == (MEJIKMPNBNL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar2 = (__this_03->fields)._size;
      if (uVar2 < (uint)pMVar10->max_length) {
        (__this_03->fields)._size = uVar2 + 1;
        pMVar10->m_Items[(int)uVar2] = pMVar8;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_03,(Il2CppObject *)pMVar8,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
    } while( true );
  }
  goto LAB_033005d4;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_033003f0:
    if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_03300424;
    }
  }
LAB_03300408:
  puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_03300424:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_03300430:
  __this_01 = (__this->fields).HDDNEKLMLMF;
  if (__this_01 != (System_Collections_Generic_List_AFFHKININGD__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_70,
                         Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
      __this_00 = local_70.fields._current;
      if (!bVar3) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_70,
                   Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        NLPJLHOEAOE_TypeInfo->static_fields->GBNKALBKGBB = true;
        return;
      }
      if ((AFFHKININGD_o *)local_70.fields._current == (AFFHKININGD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pOVar14 = ((AFFHKININGD_Fields *)((long)local_70.fields._current + 0x10))->IFJLLGPGMHM;
      if (pOVar14 == (OOMHDDBCBJP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pMVar8 = (pOVar14->fields).IAJPHAAMKPC;
      if (pMVar8 == (MEJIKMPNBNL_o *)0x0) break;
      __this_04 = ((AFFHKININGD_Fields *)((long)local_70.fields._current + 0x10))->KOILJHHCIEE;
      pSVar4 = System_String__Copy((pMVar8->fields).DEKCPPOJFEH,(MethodInfo *)0x0);
      BANHBMINMMP = System_String__Copy((pOVar14->fields).DEKCPPOJFEH,(MethodInfo *)0x0);
      MHOFCOHFCGL = System_String__Copy(((AFFHKININGD_Fields *)((long)__this_00 + 0x10))->
                                        JIJLBFGKNJK,(MethodInfo *)0x0);
      if (__this_04 == (DNELIPCHKLK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      DNELIPCHKLK__FABCBOLKOCC(__this_04,pSVar4,BANHBMINMMP,MHOFCOHFCGL,(MethodInfo *)0x0);
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_02 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (__this_02 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      CJNHFNHJHPE = ACHLOMELAJE__EKOLJIPEEHA
                              (__this_02,
                               ((AFFHKININGD_Fields *)((long)__this_00 + 0x10))->KOILJHHCIEE,
                               (MethodInfo *)0x0);
      if (CJNHFNHJHPE != (PAMEPBLOLPB_o *)0x0) {
        AFFHKININGD__HKBKHKMMBFG((AFFHKININGD_o *)__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
        AFFHKININGD__DBLLCDJCJIJ((AFFHKININGD_o *)__this_00,(MethodInfo *)0x0);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_033005d4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

