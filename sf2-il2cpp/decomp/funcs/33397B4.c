// JFDPMLLJKFH$$HNIHOIAMDPC @ RVA 0x33397B4

/* WARNING: Removing unreachable block (ram,0x03439d20) */
/* WARNING: Removing unreachable block (ram,0x03439e68) */

void JFDPMLLJKFH__HNIHOIAMDPC
               (JFDPMLLJKFH_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  Il2CppMethodPointer pIVar1;
  byte bVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar6;
  Il2CppObject *pIVar7;
  System_Collections_Generic_List_JGIFDELCGOJ__o *__this_00;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  System_Collections_Generic_Dictionary_string__ObscuredFloat__o *pSVar11;
  Il2CppClass *key;
  float fVar12;
  float fVar13;
  System_Collections_Generic_List_T__o *local_150 [4];
  System_Collections_Generic_List_Enumerator_T__o local_130;
  System_Collections_Generic_List_T__o *local_110;
  int32_t iStack_108;
  int32_t iStack_104;
  bool_conflict local_100;
  bool_conflict bStack_ff;
  undefined2 uStack_fe;
  System_Collections_Generic_List_T__o *local_f0 [4];
  System_Collections_Generic_List_T__o *local_d0;
  int32_t iStack_c8;
  int32_t iStack_c4;
  bool_conflict local_c0;
  bool_conflict bStack_bf;
  undefined2 uStack_be;
  System_Collections_Generic_List_Enumerator_T__o local_b0;
  System_Collections_Generic_List_T__o *local_90 [4];
  
  if ((DAT_04567963 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ObscuredFloat>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ObscuredFloat>_ContainsKey__)
    ;
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ObscuredFloat>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ObscuredFloat>_set_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JGIFDELCGOJ>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JGIFDELCGOJ>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JGIFDELCGOJ>_get_Current__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JGIFDELCGOJ>_GetEnumerator__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&System_Xml_XmlAttribute_TypeInfo);
    FUN_01bab630(&StringLiteral_11431);
    FUN_01bab630(&StringLiteral_3023);
    FUN_01bab630(&StringLiteral_5618);
    FUN_01bab630(&StringLiteral_14861);
    DAT_04567963 = 1;
  }
  local_b0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_b0.fields._index = 0;
  local_b0.fields._version = 0;
  local_b0.fields._current = (Il2CppObject *)0x0;
  AJNNHGGLGIF__HNIHOIAMDPC((AJNNHGGLGIF_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if ((AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) ||
     (plVar4 = (long *)(*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                 ), plVar4 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar4 = (long *)(**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar8 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03439974;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
                    /* try { // try from 03439954 to 03539a03 has its CatchHandler @ 03439954
                       catch() { ... } // from try @ 03439954 with catch @ 03439954
                       catch() { ... } // from try @ 03439a30 with catch @ 03439954
                       catch() { ... } // from try @ 03439a5c with catch @ 03439954
                       catch() { ... } // from try @ 03439a84 with catch @ 03439954
                       catch() { ... } // from try @ 03439ac4 with catch @ 03439954 */
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_03439974:
    uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar9 & 1) == 0) {
      plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar8 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 == 0) goto LAB_03439dc0;
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_034399d4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_034399d4:
    LBJNDMNEJJB = (System_Xml_XmlAttribute_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    if (LBJNDMNEJJB == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = (System_Xml_XmlAttribute_TypeInfo->_2).naturalAligment;
                    /* try { // try from 03439a04 to 03539a0b has its CatchHandler @ 03439a68 */
                    /* try { // try from 03439a18 to 03539a2f has its CatchHandler @ 03439a64 */
    if (((LBJNDMNEJJB->klass->_2).naturalAligment < bVar2) ||
       ((LBJNDMNEJJB->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)System_Xml_XmlAttribute_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(LBJNDMNEJJB);
    }
    pSVar6 = (System_String_o *)
             (*(LBJNDMNEJJB->klass->vtable)._8_get_Name.methodPtr)
                       (LBJNDMNEJJB,(LBJNDMNEJJB->klass->vtable)._8_get_Name.method);
                    /* try { // try from 03439a30 to 03539a57 has its CatchHandler @ 03439954 */
    bVar3 = System_String__op_Inequality(pSVar6,StringLiteral_11431,(MethodInfo *)0x0);
    if (bVar3) {
      pSVar6 = (System_String_o *)
               (*(LBJNDMNEJJB->klass->vtable)._8_get_Name.methodPtr)
                         (LBJNDMNEJJB,(LBJNDMNEJJB->klass->vtable)._8_get_Name.method);
                    /* try { // try from 03439a58 to 03539a5b has its CatchHandler @ 03439a60 */
                    /* try { // try from 03439a5c to 03539a7f has its CatchHandler @ 03439954 */
      bVar3 = System_String__op_Inequality(pSVar6,StringLiteral_3023,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03439a58 with catch @ 03439a60
                        */
      if (bVar3) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03439a18 with catch @ 03439a64
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03439a04 with catch @ 03439a68
                        */
        pSVar6 = (System_String_o *)
                 (*(LBJNDMNEJJB->klass->vtable)._8_get_Name.methodPtr)
                           (LBJNDMNEJJB,(LBJNDMNEJJB->klass->vtable)._8_get_Name.method);
                    /* try { // try from 03439a80 to 03539a83 has its CatchHandler @ 03439aac */
                    /* try { // try from 03439a84 to 03539abb has its CatchHandler @ 03439954 */
        bVar3 = System_String__op_Inequality(pSVar6,StringLiteral_5618,(MethodInfo *)0x0);
        if (bVar3) {
          pSVar6 = (System_String_o *)
                   (*(LBJNDMNEJJB->klass->vtable)._8_get_Name.methodPtr)
                             (LBJNDMNEJJB,(LBJNDMNEJJB->klass->vtable)._8_get_Name.method);
          bVar3 = System_String__op_Inequality(pSVar6,StringLiteral_14861,(MethodInfo *)0x0);
          if (bVar3) {
                    /* catch() { ... } // from try @ 03439a80 with catch @ 03439aac */
            pSVar11 = (__this->fields).CMHJMGKMCCI;
                    /* try { // try from 03439abc to 03539ac3 has its CatchHandler @ 03439ad8 */
            pIVar7 = (Il2CppObject *)
                     (*(LBJNDMNEJJB->klass->vtable)._8_get_Name.methodPtr)
                               (LBJNDMNEJJB,(LBJNDMNEJJB->klass->vtable)._8_get_Name.method);
                    /* try { // try from 03439ac4 to 03539acf has its CatchHandler @ 03439954 */
            if (pSVar11 == (System_Collections_Generic_Dictionary_string__ObscuredFloat__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
                    /* try { // try from 03439ad0 to 03539ad7 has its CatchHandler @ 03439ad8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03439abc with catch @ 03439ad8
                       catch(type#2 @ 00000000) { ... } // from try @ 03439ad0 with catch @ 03439ad8
                        */
            bVar3 = System_Collections_Generic_Dictionary<object,_ObscuredFloat>__ContainsKey
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,
                               pIVar7,
                               Method_System_Collections_Generic_Dictionary<string,_ObscuredFloat>_ContainsKey__
                              );
            pSVar11 = (__this->fields).CMHJMGKMCCI;
            pIVar1 = (LBJNDMNEJJB->klass->vtable)._8_get_Name.methodPtr;
            if (bVar3) {
              pIVar7 = (Il2CppObject *)(*pIVar1)(LBJNDMNEJJB);
              if (pSVar11 == (System_Collections_Generic_Dictionary_string__ObscuredFloat__o *)0x0)
              {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              System_Collections_Generic_Dictionary<object,_ObscuredFloat>__get_Item
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_130,
                         (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,pIVar7,
                         Method_System_Collections_Generic_Dictionary<string,_ObscuredFloat>_get_Item__
                        );
              local_f0[1] = (System_Collections_Generic_List_T__o *)local_130.fields._8_8_;
              local_f0[0] = local_130.fields._list;
              local_f0[2]._0_1_ = local_130.fields._current._0_1_;
              local_f0[2]._1_1_ = local_130.fields._current._1_1_;
              local_f0[2]._2_2_ = local_130.fields._current._2_2_;
              fVar12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                                 ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)local_f0,
                                  (MethodInfo *)0x0);
              fVar13 = EIABCPKDEBD__GICIEKCGOHA(LBJNDMNEJJB,0.0,(MethodInfo *)0x0);
              CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_130,
                         fVar12 + fVar13,(MethodInfo *)0x0);
              iStack_108 = local_130.fields._index;
              iStack_104 = local_130.fields._version;
              local_110 = local_130.fields._list;
              local_100 = local_130.fields._current._0_1_;
              bStack_ff = local_130.fields._current._1_1_;
              uStack_fe = local_130.fields._current._2_2_;
              System_Collections_Generic_Dictionary<object,_ObscuredFloat>__set_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,pIVar7,
                         (CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_130,
                         Method_System_Collections_Generic_Dictionary<string,_ObscuredFloat>_set_Item__
                        );
            }
            else {
              pIVar7 = (Il2CppObject *)
                       (*pIVar1)(LBJNDMNEJJB,(LBJNDMNEJJB->klass->vtable)._8_get_Name.method);
              fVar12 = EIABCPKDEBD__GICIEKCGOHA(LBJNDMNEJJB,0.0,(MethodInfo *)0x0);
              CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_130,fVar12,
                         (MethodInfo *)0x0);
              iStack_c8 = local_130.fields._index;
              iStack_c4 = local_130.fields._version;
              local_d0 = local_130.fields._list;
              local_c0 = local_130.fields._current._0_1_;
              bStack_bf = local_130.fields._current._1_1_;
              uStack_be = local_130.fields._current._2_2_;
              if (pSVar11 == (System_Collections_Generic_Dictionary_string__ObscuredFloat__o *)0x0)
              {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              System_Collections_Generic_Dictionary<object,_ObscuredFloat>__Add
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,pIVar7,
                         (CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_130,
                         Method_System_Collections_Generic_Dictionary<string,_ObscuredFloat>_Add__);
            }
          }
        }
      }
    }
    pSVar6 = (System_String_o *)
             (*(LBJNDMNEJJB->klass->vtable)._8_get_Name.methodPtr)
                       (LBJNDMNEJJB,(LBJNDMNEJJB->klass->vtable)._8_get_Name.method);
    bVar3 = System_String__op_Equality(pSVar6,StringLiteral_14861,(MethodInfo *)0x0);
    if (bVar3) {
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = MGNPHCAAEIO_TypeInfo->static_fields->HNPCJGMHLCM;
      if (__this_00 == (System_Collections_Generic_List_JGIFDELCGOJ__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_130,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<JGIFDELCGOJ>_GetEnumerator__);
      local_b0.fields._current =
           (Il2CppObject *)CONCAT44(local_130.fields._current._4_4_,local_130.fields._current._0_4_)
      ;
      local_b0.fields._index = local_130.fields._index;
      local_b0.fields._version = local_130.fields._version;
      local_b0.fields._list = local_130.fields._list;
      while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_b0,
                                Method_System_Collections_Generic_List_Enumerator<JGIFDELCGOJ>_MoveNext__
                               ), bVar3) {
        if (local_b0.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar11 = (__this->fields).CMHJMGKMCCI;
        if (pSVar11 == (System_Collections_Generic_Dictionary_string__ObscuredFloat__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        key = local_b0.fields._current[1].klass;
        System_Collections_Generic_Dictionary<object,_ObscuredFloat>__get_Item
                  ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_130,
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,
                   (Il2CppObject *)key,
                   Method_System_Collections_Generic_Dictionary<string,_ObscuredFloat>_get_Item__);
        local_150[1] = (System_Collections_Generic_List_T__o *)local_130.fields._8_8_;
        local_150[0] = local_130.fields._list;
        local_150[2]._0_1_ = local_130.fields._current._0_1_;
        local_150[2]._1_1_ = local_130.fields._current._1_1_;
        local_150[2]._2_2_ = local_130.fields._current._2_2_;
        fVar12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                           ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)local_150,
                            (MethodInfo *)0x0);
        fVar13 = EIABCPKDEBD__GICIEKCGOHA(LBJNDMNEJJB,0.0,(MethodInfo *)0x0);
        CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                  ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_130,fVar12 + fVar13,
                   (MethodInfo *)0x0);
        local_90[1] = (System_Collections_Generic_List_T__o *)local_130.fields._8_8_;
        local_90[0] = local_130.fields._list;
        local_90[2]._0_1_ = local_130.fields._current._0_1_;
        local_90[2]._1_1_ = local_130.fields._current._1_1_;
        local_90[2]._2_2_ = local_130.fields._current._2_2_;
        System_Collections_Generic_Dictionary<object,_ObscuredFloat>__set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,
                   (Il2CppObject *)key,(CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)local_90
                   ,Method_System_Collections_Generic_Dictionary<string,_ObscuredFloat>_set_Item__);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_b0,Method_System_Collections_Generic_List_Enumerator<JGIFDELCGOJ>_Dispose__)
      ;
    }
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(System_IDisposable_c **)(piVar10 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_03439ddc;
    }
  }
LAB_03439dc0:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_03439ddc:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}

