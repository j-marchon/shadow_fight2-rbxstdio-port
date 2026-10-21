// FDJKKAFIEFB$$FFNEBCPLKDN @ RVA 0x35B4454

System_String_o *
FDJKKAFIEFB__FFNEBCPLKDN
          (FDJKKAFIEFB_o *__this,System_String_o *JEHFOBHMGJM,System_String_array *OKBIKHHKOEN,
          MethodInfo *method)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int32_t iVar8;
  int32_t iVar9;
  System_Collections_Generic_List_object__o *__this_00;
  System_String_o *pSVar10;
  System_Collections_Generic_Dictionary_object__object__o *pSVar11;
  System_String_o *pSVar12;
  System_String_o *pSVar13;
  System_Object_array *pSVar14;
  long lVar15;
  Il2CppObject *pIVar16;
  System_String_o *pSVar17;
  undefined8 uVar18;
  MethodInfo *method_00;
  undefined8 local_70;
  int32_t local_64;
  
  if ((DAT_04568eaf & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_get_Item__);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<int>__ctor__);
    FUN_01bab630(&System_Nullable<int>_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_47);
    FUN_01bab630(&StringLiteral_6828);
    FUN_01bab630(&StringLiteral_22381);
    FUN_01bab630(&StringLiteral_22230);
    FUN_01bab630(&StringLiteral_6831);
    FUN_01bab630(&StringLiteral_2470);
    FUN_01bab630(&StringLiteral_167);
    FUN_01bab630(&StringLiteral_562);
    FUN_01bab630(&StringLiteral_762);
    FUN_01bab630(&StringLiteral_22500);
    FUN_01bab630(&StringLiteral_2102);
    FUN_01bab630(&StringLiteral_2422);
    FUN_01bab630(&StringLiteral_2147);
    FUN_01bab630(&StringLiteral_529);
    FUN_01bab630(&StringLiteral_795);
    FUN_01bab630(&StringLiteral_15810);
    FUN_01bab630(&StringLiteral_270);
    FUN_01bab630(&StringLiteral_2445);
    FUN_01bab630(&StringLiteral_6827);
    FUN_01bab630(&StringLiteral_853);
    FUN_01bab630(&StringLiteral_2457);
    FUN_01bab630(&StringLiteral_528);
    FUN_01bab630(&StringLiteral_21266);
    FUN_01bab630(&StringLiteral_22469);
    FUN_01bab630(&StringLiteral_6830);
    FUN_01bab630(&StringLiteral_561);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_798);
    FUN_01bab630(&StringLiteral_18941);
    FUN_01bab630(&StringLiteral_20269);
    FUN_01bab630(&StringLiteral_2475);
    FUN_01bab630(&StringLiteral_6829);
    DAT_04568eaf = 1;
  }
  local_64 = 0;
  bVar4 = PCOEHCPGBBG__BDLEIEHBFAD(JEHFOBHMGJM,(MethodInfo *)0x0);
  if ((bVar4) || ((__this->fields)._ELDCPOBNFJJ_k__BackingField == (DBNEEHGBCJD_o *)0x0)) {
    return StringLiteral_1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  if (OKBIKHHKOEN != (System_String_array *)0x0) {
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_036b4f48;
    System_Collections_Generic_List<object>__AddRange
              (__this_00,(System_Collections_Generic_IEnumerable_T__o *)OKBIKHHKOEN,
               Method_System_Collections_Generic_List<string>_AddRange__);
  }
  if (JEHFOBHMGJM != (System_String_o *)0x0) {
    uVar7 = System_String__IndexOf(JEHFOBHMGJM,StringLiteral_22230,(MethodInfo *)0x0);
    pSVar10 = JEHFOBHMGJM;
    if (uVar7 != 0xffffffff) {
      pSVar10 = System_String__Substring(JEHFOBHMGJM,0,uVar7,(MethodInfo *)0x0);
    }
    pSVar11 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).ELBMCMNELDD;
    if (pSVar11 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar4 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                        (pSVar11,(Il2CppObject *)pSVar10,
                         Method_System_Collections_Generic_Dictionary<string,_string>_ContainsKey__)
      ;
      if (!bVar4) {
        pSVar10 = System_String__Concat
                            (StringLiteral_6828,pSVar10,StringLiteral_853,(MethodInfo *)0x0);
        KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,pSVar10,(MethodInfo *)0x0);
        return StringLiteral_762;
                    /* try { // try from 036b49b0 to 037b4ab7 has its CatchHandler @ 036b49b0
                       catch() { ... } // from try @ 036b49b0 with catch @ 036b49b0
                       catch() { ... } // from try @ 036b4ed8 with catch @ 036b49b0
                       catch() { ... } // from try @ 036b4f60 with catch @ 036b49b0
                       catch() { ... } // from try @ 036b4fc0 with catch @ 036b49b0
                       catch() { ... } // from try @ 036b4fcc with catch @ 036b49b0 */
      }
      pSVar11 = (System_Collections_Generic_Dictionary_object__object__o *)
                (__this->fields).ELBMCMNELDD;
      if ((((pSVar11 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
           (pSVar10 = (System_String_o *)
                      System_Collections_Generic_Dictionary<object,_object>__get_Item
                                (pSVar11,(Il2CppObject *)pSVar10,
                                 Method_System_Collections_Generic_Dictionary<string,_string>_get_Item__
                                ), pSVar10 != (System_String_o *)0x0)) &&
          (pSVar10 = System_String__Replace
                               (pSVar10,StringLiteral_22469,StringLiteral_47,(MethodInfo *)0x0),
          pSVar10 != (System_String_o *)0x0)) &&
         (pSVar10 = System_String__Replace
                              (pSVar10,StringLiteral_798,StringLiteral_2147,(MethodInfo *)0x0),
         pSVar10 != (System_String_o *)0x0)) {
        method_00 = (MethodInfo *)0x0;
        pSVar10 = System_String__Replace
                            (pSVar10,StringLiteral_795,StringLiteral_2475,(MethodInfo *)0x0);
        if (uVar7 == 0xffffffff) {
LAB_036b49ec:
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_036b4f48;
        }
        else {
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_036b4f48;
          if ((__this_00->fields)._size != 0) {
            pSVar12 = System_String__Concat
                                (StringLiteral_6831,JEHFOBHMGJM,StringLiteral_853,(MethodInfo *)0x0)
            ;
            KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,pSVar12,(MethodInfo *)0x0);
          }
          do {
            iVar1 = uVar7 + 1;
            iVar8 = System_String__IndexOf(JEHFOBHMGJM,0x7d,iVar1,(MethodInfo *)0x0);
            iVar9 = System_String__IndexOf(JEHFOBHMGJM,0x7b,iVar1,(MethodInfo *)0x0);
            if (iVar9 < iVar8) {
              iVar9 = System_String__IndexOf(JEHFOBHMGJM,0x7b,iVar1,(MethodInfo *)0x0);
              if ((iVar8 == -1) || (iVar9 != -1)) goto LAB_036b49b8;
            }
            else if (iVar8 == -1) {
LAB_036b49b8:
              method_00 = (MethodInfo *)0x0;
              pSVar12 = System_String__Concat
                                  (StringLiteral_6830,JEHFOBHMGJM,StringLiteral_853,
                                   (MethodInfo *)0x0);
              KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,pSVar12,(MethodInfo *)0x0);
              goto LAB_036b49ec;
            }
            pSVar12 = System_String__Substring(JEHFOBHMGJM,iVar1,iVar8 + ~uVar7,(MethodInfo *)0x0);
            lVar15 = Method_System_Collections_Generic_List<string>_Add__;
            pSVar14 = (__this_00->fields)._items;
            (__this_00->fields)._version = (__this_00->fields)._version + 1;
            if (pSVar14 == (System_Object_array *)0x0) goto LAB_036b4f48;
            uVar7 = (__this_00->fields)._size;
            if (uVar7 < (uint)pSVar14->max_length) {
              (__this_00->fields)._size = uVar7 + 1;
              pSVar14->m_Items[(int)uVar7] = (Il2CppObject *)pSVar12;
              thunk_FUN_01c20e04();
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this_00,(Il2CppObject *)pSVar12,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70)
                        );
            }
            method_00 = (MethodInfo *)0x0;
            uVar7 = System_String__IndexOf(JEHFOBHMGJM,0x7b,iVar1,(MethodInfo *)0x0);
          } while (uVar7 != 0xffffffff);
        }
        if ((__this_00->fields)._size != 0) {
          if (pSVar10 == (System_String_o *)0x0) goto LAB_036b4f48;
          uVar7 = System_String__IndexOf(pSVar10,StringLiteral_22230,(MethodInfo *)0x0);
          while (uVar7 != 0xffffffff) {
            iVar1 = uVar7 + 1;
            iVar8 = System_String__IndexOf(pSVar10,0x7d,iVar1,(MethodInfo *)0x0);
            iVar9 = System_String__IndexOf(pSVar10,0x7b,iVar1,(MethodInfo *)0x0);
            if (iVar9 < iVar8) {
              iVar9 = System_String__IndexOf(pSVar10,0x7b,iVar1,(MethodInfo *)0x0);
              if ((iVar8 == -1) || (iVar9 != -1)) goto LAB_036b4f00;
            }
            else if (iVar8 == -1) {
LAB_036b4f00:
                    /* catch() { ... } // from try @ 036b4b10 with catch @ 036b4f00 */
                    /* catch() { ... } // from try @ 036b4ce0 with catch @ 036b4f04 */
                    /* catch() { ... } // from try @ 036b4d68 with catch @ 036b4f08 */
                    /* catch() { ... } // from try @ 036b4bf4 with catch @ 036b4f0c */
                    /* catch() { ... } // from try @ 036b4b70 with catch @ 036b4f10 */
                    /* catch() { ... } // from try @ 036b4aec with catch @ 036b4f14
                       catch() { ... } // from try @ 036b4e30 with catch @ 036b4f14 */
              method_00 = (MethodInfo *)0x0;
                    /* catch() { ... } // from try @ 036b4ab8 with catch @ 036b4f18 */
                    /* catch() { ... } // from try @ 036b4dd8 with catch @ 036b4f1c
                       catch() { ... } // from try @ 036b4e8c with catch @ 036b4f1c */
                    /* catch() { ... } // from try @ 036b4d28 with catch @ 036b4f20
                       catch() { ... } // from try @ 036b4e88 with catch @ 036b4f20 */
              pSVar12 = System_String__Concat
                                  (StringLiteral_6829,JEHFOBHMGJM,StringLiteral_853,
                                   (MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 036b4c64 with catch @ 036b4f24
                       catch() { ... } // from try @ 036b4e38 with catch @ 036b4f24 */
                    /* catch() { ... } // from try @ 036b4d80 with catch @ 036b4f28 */
                    /* catch() { ... } // from try @ 036b4c0c with catch @ 036b4f2c */
                    /* catch() { ... } // from try @ 036b4b94 with catch @ 036b4f30
                       catch() { ... } // from try @ 036b4e34 with catch @ 036b4f30 */
              KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,pSVar12,(MethodInfo *)0x0);
              break;
            }
            pSVar12 = System_String__Substring(pSVar10,iVar1,iVar8 + ~uVar7,(MethodInfo *)0x0);
            bVar4 = System_Int32__TryParse(pSVar12,&local_64,(MethodInfo *)0x0);
            if (!bVar4) {
              if (pSVar12 == (System_String_o *)0x0) goto LAB_036b4f48;
                    /* try { // try from 036b4ab8 to 037b4acf has its CatchHandler @ 036b4f18 */
              pSVar13 = System_String__ToUpper(pSVar12,(MethodInfo *)0x0);
              if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564(BHEDGAKGKPO_TypeInfo);
              }
              if (pSVar13 == (System_String_o *)0x0) goto LAB_036b4f48;
                    /* try { // try from 036b4aec to 037b4af7 has its CatchHandler @ 036b4f14 */
              pSVar13 = System_String__Trim(pSVar13,BHEDGAKGKPO_TypeInfo->static_fields->IGMHFJCDAIL
                                            ,(MethodInfo *)0x0);
                    /* try { // try from 036b4b10 to 037b4b1b has its CatchHandler @ 036b4f00 */
              System_Int32__TryParse(pSVar13,&local_64,(MethodInfo *)0x0);
            }
                    /* try { // try from 036b4b2c to 037b4b37 has its CatchHandler @ 036b4efc */
            pSVar13 = System_String__Concat
                                (StringLiteral_22230,pSVar12,StringLiteral_22500,(MethodInfo *)0x0);
            pSVar12 = StringLiteral_1;
                    /* try { // try from 036b4b44 to 037b4b4b has its CatchHandler @ 036b4ef8 */
            if ((local_64 < 0) || ((__this_00->fields)._size <= local_64)) {
                    /* try { // try from 036b4b70 to 037b4b87 has its CatchHandler @ 036b4f10 */
              pSVar14 = (System_Object_array *)FUN_01bab718(object___TypeInfo,4);
              if (pSVar14 == (System_Object_array *)0x0) goto LAB_036b4f48;
                    /* try { // try from 036b4b94 to 037b4bd3 has its CatchHandler @ 036b4f30 */
              if (StringLiteral_6827 == (Il2CppObject *)0x0) {
                pIVar16 = (Il2CppObject *)0x0;
              }
              else {
                lVar15 = thunk_FUN_01bda71c(StringLiteral_6827,
                                            (((pSVar14->obj).klass)->_1).element_class);
                pIVar16 = StringLiteral_6827;
                if (lVar15 == 0) goto LAB_036b4f50;
              }
              if ((int)pSVar14->max_length == 0) {
LAB_036b4f4c:
                    /* WARNING: Subroutine does not return */
                FUN_01bab8d0();
              }
              pSVar14->m_Items[0] = pIVar16;
              thunk_FUN_01c20e04();
                    /* try { // try from 036b4be0 to 037b4beb has its CatchHandler @ 036b4ef0 */
              lVar15 = thunk_FUN_01bda71c(JEHFOBHMGJM,(((pSVar14->obj).klass)->_1).element_class);
              if (lVar15 == 0) {
LAB_036b4f50:
                uVar18 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
                FUN_01bab798(uVar18,0);
              }
              if ((uint)pSVar14->max_length < 2) goto LAB_036b4f4c;
                    /* try { // try from 036b4bf4 to 037b4c0b has its CatchHandler @ 036b4f0c */
              pSVar14->m_Items[1] = (Il2CppObject *)JEHFOBHMGJM;
              thunk_FUN_01c20e04(pSVar14->m_Items + 1,JEHFOBHMGJM);
                    /* try { // try from 036b4c0c to 037b4c5b has its CatchHandler @ 036b4f2c */
              local_70 = CONCAT44(local_70._4_4_,local_64);
              pIVar16 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_70);
              if ((pIVar16 != (Il2CppObject *)0x0) &&
                 (lVar15 = thunk_FUN_01bda71c(pIVar16,(((pSVar14->obj).klass)->_1).element_class),
                 lVar15 == 0)) goto LAB_036b4f50;
              if ((uint)pSVar14->max_length < 3) goto LAB_036b4f4c;
              pSVar14->m_Items[2] = pIVar16;
              thunk_FUN_01c20e04(pSVar14->m_Items + 2,pIVar16);
              pSVar17 = StringLiteral_22381;
                    /* try { // try from 036b4c64 to 037b4c8b has its CatchHandler @ 036b4f24 */
              if (OKBIKHHKOEN == (System_String_array *)0x0) {
                local_70 = 0;
              }
              else {
                local_70 = 0;
                System_Nullable<int>___ctor
                          ((System_Nullable_int__o)&local_70,(int32_t)OKBIKHHKOEN->max_length,
                           Method_System_Nullable<int>__ctor__);
              }
              pIVar16 = (Il2CppObject *)thunk_FUN_01bda448(System_Nullable<int>_TypeInfo,&local_70);
                    /* try { // try from 036b4cac to 037b4cbb has its CatchHandler @ 036b4ee4 */
              if ((pIVar16 != (Il2CppObject *)0x0) &&
                 (lVar15 = thunk_FUN_01bda71c(pIVar16,(((pSVar14->obj).klass)->_1).element_class),
                 lVar15 == 0)) goto LAB_036b4f50;
                    /* try { // try from 036b4cc8 to 037b4cdf has its CatchHandler @ 036b4ee0 */
              if ((uint)pSVar14->max_length < 4) goto LAB_036b4f4c;
              pSVar14->m_Items[3] = pIVar16;
              thunk_FUN_01c20e04(pSVar14->m_Items + 3,pIVar16);
                    /* try { // try from 036b4ce0 to 037b4d17 has its CatchHandler @ 036b4f04 */
              pSVar17 = System_String__Format(pSVar17,pSVar14,(MethodInfo *)0x0);
              KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,pSVar17,(MethodInfo *)0x0);
            }
            else {
                    /* try { // try from 036b4b58 to 037b4b63 has its CatchHandler @ 036b4ef4 */
              pSVar12 = (System_String_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  (__this_00,local_64,
                                   Method_System_Collections_Generic_List<string>_get_Item__);
            }
            if (pSVar12 == (System_String_o *)0x0) goto LAB_036b4f48;
            bVar4 = System_String__StartsWith(pSVar12,StringLiteral_18941,(MethodInfo *)0x0);
                    /* try { // try from 036b4d28 to 037b4d4f has its CatchHandler @ 036b4f20 */
            bVar5 = System_String__StartsWith(pSVar12,StringLiteral_20269,(MethodInfo *)0x0);
                    /* try { // try from 036b4d54 to 037b4d5f has its CatchHandler @ 036b4edc */
            bVar6 = System_String__StartsWith(pSVar12,StringLiteral_21266,(MethodInfo *)0x0);
            if (((bVar4) || (bVar5)) || (bVar6)) {
                    /* try { // try from 036b4d68 to 037b4d7f has its CatchHandler @ 036b4f08 */
              if ((bVar4 || bVar5) || bVar6) {
                    /* try { // try from 036b4d80 to 037b4dcf has its CatchHandler @ 036b4f28 */
                puVar2 = &StringLiteral_2422;
                if (!bVar4) {
                  puVar2 = &StringLiteral_2445;
                }
                puVar3 = &StringLiteral_18941;
                if (!bVar4) {
                  puVar3 = &StringLiteral_20269;
                }
                if (!bVar4 && !bVar5) {
                  puVar2 = &StringLiteral_2457;
                }
                if (!bVar4 && !bVar5) {
                  puVar3 = &StringLiteral_21266;
                }
                pSVar12 = System_String__Replace
                                    (pSVar12,(System_String_o *)*puVar3,(System_String_o *)*puVar2,
                                     (MethodInfo *)0x0);
                if (pSVar12 == (System_String_o *)0x0) goto LAB_036b4f48;
              }
                    /* try { // try from 036b4dd8 to 037b4dff has its CatchHandler @ 036b4f1c */
              pSVar12 = System_String__Replace
                                  (pSVar12,StringLiteral_15810,StringLiteral_167,(MethodInfo *)0x0);
                    /* try { // try from 036b4e30 to 037b4e33 has its CatchHandler @ 036b4f14 */
                    /* try { // try from 036b4e34 to 037b4e37 has its CatchHandler @ 036b4f30 */
                    /* try { // try from 036b4e38 to 037b4e3b has its CatchHandler @ 036b4f24 */
                    /* try { // try from 036b4e3c to 037b4e83 has its CatchHandler @ 036b4eec */
              if (((pSVar12 == (System_String_o *)0x0) ||
                  (pSVar12 = System_String__Replace
                                       (pSVar12,StringLiteral_2102,StringLiteral_2470,
                                        (MethodInfo *)0x0), pSVar12 == (System_String_o *)0x0)) ||
                 ((bVar4 = System_String__Contains(pSVar12,StringLiteral_528,(MethodInfo *)0x0),
                  !bVar4 && (pSVar12 = System_String__Concat
                                                 (pSVar12,StringLiteral_529,(MethodInfo *)0x0),
                            pSVar12 == (System_String_o *)0x0)))) goto LAB_036b4f48;
              bVar4 = System_String__Contains(pSVar12,StringLiteral_561,(MethodInfo *)0x0);
              if (!bVar4) {
                    /* try { // try from 036b4e84 to 037b4e87 has its CatchHandler @ 036b4ee8 */
                    /* try { // try from 036b4e88 to 037b4e8b has its CatchHandler @ 036b4f20 */
                    /* try { // try from 036b4e8c to 037b4e8f has its CatchHandler @ 036b4f1c */
                    /* try { // try from 036b4e90 to 037b4ed7 has its CatchHandler @ 036b4ed8 */
                pSVar12 = System_String__Concat(pSVar12,StringLiteral_562,(MethodInfo *)0x0);
              }
              pSVar12 = System_String__Concat(pSVar12,StringLiteral_270,(MethodInfo *)0x0);
            }
            method_00 = (MethodInfo *)0x0;
            pSVar10 = System_String__Replace(pSVar10,pSVar13,pSVar12,(MethodInfo *)0x0);
            if (pSVar10 == (System_String_o *)0x0) goto LAB_036b4f48;
                    /* catch() { ... } // from try @ 036b4e90 with catch @ 036b4ed8
                       try { // try from 036b4ed8 to 037b4f47 has its CatchHandler @ 036b49b0 */
            if ((pSVar10->fields)._stringLength <= iVar1) break;
                    /* catch() { ... } // from try @ 036b4d54 with catch @ 036b4edc */
                    /* catch() { ... } // from try @ 036b4cc8 with catch @ 036b4ee0 */
                    /* catch() { ... } // from try @ 036b4cac with catch @ 036b4ee4 */
                    /* catch() { ... } // from try @ 036b4e84 with catch @ 036b4ee8 */
            method_00 = (MethodInfo *)0x0;
                    /* catch() { ... } // from try @ 036b4e3c with catch @ 036b4eec */
            uVar7 = System_String__IndexOf(pSVar10,0x7b,iVar1,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 036b4be0 with catch @ 036b4ef0 */
                    /* catch() { ... } // from try @ 036b4b58 with catch @ 036b4ef4 */
                    /* catch() { ... } // from try @ 036b4b44 with catch @ 036b4ef8 */
          }
        }
        pSVar10 = FDJKKAFIEFB__GFGNEFOPAGP(__this,pSVar10,JEHFOBHMGJM,method_00);
        return pSVar10;
      }
    }
  }
LAB_036b4f48:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 036b4f48 to 037b4f5f has its CatchHandler @ 036b4fc4 */
  FUN_01bab8c8();
}

