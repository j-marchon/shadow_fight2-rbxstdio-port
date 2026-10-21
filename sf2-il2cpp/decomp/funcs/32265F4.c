// GNNIOHGGHAF$$OLONNBEDLLI @ RVA 0x32265F4

System_Collections_Generic_IReadOnlyList_string__o * GNNIOHGGHAF__OLONNBEDLLI(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_IReadOnlyList_string__o *pSVar3;
  System_Collections_Generic_List_object__o *__this;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  System_String_o *pSVar6;
  System_Object_array *pSVar7;
  
  if ((DAT_04566f7c & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6053);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6054);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6055);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6056);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6057);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6058);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6059);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6060);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6061);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6062);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6063);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6064);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6065);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6066);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6067);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6068);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6069);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6070);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6071);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6072);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6073);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6074);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6075);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6076);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6077);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6078);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6079);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6080);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&GNNIOHGGHAF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04566f7c = 1;
  }
  pSVar3 = GNNIOHGGHAF_TypeInfo->static_fields->OMPBOMHFJDN;
  if (pSVar3 != (System_Collections_Generic_IReadOnlyList_string__o *)0x0) {
    return pSVar3;
  }
  __this = (System_Collections_Generic_List_object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            (__this,Method_System_Collections_Generic_List<string>__ctor__);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6053,(MethodInfo *)0x0);
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6054,(MethodInfo *)0x0);
  pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar7 = (__this->fields)._items;
    (__this->fields)._version = (__this->fields)._version + 1;
    if (pSVar7 != (System_Object_array *)0x0) {
      uVar1 = (__this->fields)._size;
      if (uVar1 < (uint)pSVar7->max_length) {
        (__this->fields)._size = uVar1 + 1;
        pSVar7->m_Items[(int)uVar1] = (Il2CppObject *)pSVar6;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (__this,(Il2CppObject *)pSVar6,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6055,
                 (MethodInfo *)0x0);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6056,
                 (MethodInfo *)0x0);
      pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<string>_Add__;
      pSVar7 = (__this->fields)._items;
      (__this->fields)._version = (__this->fields)._version + 1;
      if (pSVar7 != (System_Object_array *)0x0) {
        uVar1 = (__this->fields)._size;
        if (uVar1 < (uint)pSVar7->max_length) {
          (__this->fields)._size = uVar1 + 1;
          pSVar7->m_Items[(int)uVar1] = (Il2CppObject *)pSVar6;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this,(Il2CppObject *)pSVar6,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6057,
                   (MethodInfo *)0x0);
        pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar5,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6058,
                   (MethodInfo *)0x0);
        pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<string>_Add__;
        pSVar7 = (__this->fields)._items;
        (__this->fields)._version = (__this->fields)._version + 1;
        if (pSVar7 != (System_Object_array *)0x0) {
          uVar1 = (__this->fields)._size;
          if (uVar1 < (uint)pSVar7->max_length) {
            (__this->fields)._size = uVar1 + 1;
            pSVar7->m_Items[(int)uVar1] = (Il2CppObject *)pSVar6;
            thunk_FUN_01c20e04();
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this,(Il2CppObject *)pSVar6,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6059,
                     (MethodInfo *)0x0);
          pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar5,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6060,
                     (MethodInfo *)0x0);
          pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
          lVar2 = Method_System_Collections_Generic_List<string>_Add__;
          pSVar7 = (__this->fields)._items;
          (__this->fields)._version = (__this->fields)._version + 1;
          if (pSVar7 != (System_Object_array *)0x0) {
            uVar1 = (__this->fields)._size;
            if (uVar1 < (uint)pSVar7->max_length) {
              (__this->fields)._size = uVar1 + 1;
              pSVar7->m_Items[(int)uVar1] = (Il2CppObject *)pSVar6;
              thunk_FUN_01c20e04();
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this,(Il2CppObject *)pSVar6,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
            pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar4,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6061,
                       (MethodInfo *)0x0);
            pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar5,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6062,
                       (MethodInfo *)0x0);
            pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
            lVar2 = Method_System_Collections_Generic_List<string>_Add__;
            pSVar7 = (__this->fields)._items;
            (__this->fields)._version = (__this->fields)._version + 1;
            if (pSVar7 != (System_Object_array *)0x0) {
              uVar1 = (__this->fields)._size;
              if (uVar1 < (uint)pSVar7->max_length) {
                (__this->fields)._size = uVar1 + 1;
                pSVar7->m_Items[(int)uVar1] = (Il2CppObject *)pSVar6;
                thunk_FUN_01c20e04();
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          (__this,(Il2CppObject *)pSVar6,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              }
              pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar4,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6063,
                         (MethodInfo *)0x0);
              pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar5,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6064,
                         (MethodInfo *)0x0);
              pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
              lVar2 = Method_System_Collections_Generic_List<string>_Add__;
              pSVar7 = (__this->fields)._items;
              (__this->fields)._version = (__this->fields)._version + 1;
              if (pSVar7 != (System_Object_array *)0x0) {
                uVar1 = (__this->fields)._size;
                if (uVar1 < (uint)pSVar7->max_length) {
                  (__this->fields)._size = uVar1 + 1;
                  pSVar7->m_Items[(int)uVar1] = (Il2CppObject *)pSVar6;
                  thunk_FUN_01c20e04();
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            (__this,(Il2CppObject *)pSVar6,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                }
                pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          ((System_Array_o *)pSVar4,
                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6065,
                           (MethodInfo *)0x0);
                pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          ((System_Array_o *)pSVar5,
                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6066,
                           (MethodInfo *)0x0);
                pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
                lVar2 = Method_System_Collections_Generic_List<string>_Add__;
                pSVar7 = (__this->fields)._items;
                (__this->fields)._version = (__this->fields)._version + 1;
                if (pSVar7 != (System_Object_array *)0x0) {
                  uVar1 = (__this->fields)._size;
                  if (uVar1 < (uint)pSVar7->max_length) {
                    (__this->fields)._size = uVar1 + 1;
                    pSVar7->m_Items[(int)uVar1] = (Il2CppObject *)pSVar6;
                    thunk_FUN_01c20e04();
                  }
                  else {
                    System_Collections_Generic_List<object>__AddWithResize
                              (__this,(Il2CppObject *)pSVar6,
                               *(MethodInfo_26E4DAC **)
                                (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                  }
                  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03326ce0 to 03426f3b has its CatchHandler @ 03326ce0
                       catch() { ... } // from try @ 03326ce0 with catch @ 03326ce0
                       catch() { ... } // from try @ 03326ffc with catch @ 03326ce0
                       catch() { ... } // from try @ 0332704c with catch @ 03326ce0
                       catch() { ... } // from try @ 03327088 with catch @ 03326ce0
                       catch() { ... } // from try @ 033270b8 with catch @ 03326ce0 */
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            ((System_Array_o *)pSVar4,
                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6067,
                             (MethodInfo *)0x0);
                  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            ((System_Array_o *)pSVar5,
                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6068,
                             (MethodInfo *)0x0);
                  pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
                  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
                  pSVar7 = (__this->fields)._items;
                  (__this->fields)._version = (__this->fields)._version + 1;
                  if (pSVar7 != (System_Object_array *)0x0) {
                    uVar1 = (__this->fields)._size;
                    if (uVar1 < (uint)pSVar7->max_length) {
                      (__this->fields)._size = uVar1 + 1;
                      pSVar7->m_Items[(int)uVar1] = (Il2CppObject *)pSVar6;
                      thunk_FUN_01c20e04();
                    }
                    else {
                      System_Collections_Generic_List<object>__AddWithResize
                                (__this,(Il2CppObject *)pSVar6,
                                 *(MethodInfo_26E4DAC **)
                                  (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                    }
                    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                              ((System_Array_o *)pSVar4,
                               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6069,
                               (MethodInfo *)0x0);
                    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                              ((System_Array_o *)pSVar5,
                               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6070,
                               (MethodInfo *)0x0);
                    pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
                    lVar2 = Method_System_Collections_Generic_List<string>_Add__;
                    pSVar7 = (__this->fields)._items;
                    (__this->fields)._version = (__this->fields)._version + 1;
                    if (pSVar7 != (System_Object_array *)0x0) {
                      uVar1 = (__this->fields)._size;
                      if (uVar1 < (uint)pSVar7->max_length) {
                        (__this->fields)._size = uVar1 + 1;
                        pSVar7->m_Items[(int)uVar1] = (Il2CppObject *)pSVar6;
                        thunk_FUN_01c20e04();
                      }
                      else {
                        System_Collections_Generic_List<object>__AddWithResize
                                  (__this,(Il2CppObject *)pSVar6,
                                   *(MethodInfo_26E4DAC **)
                                    (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                      }
                      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                ((System_Array_o *)pSVar4,
                                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6071,
                                 (MethodInfo *)0x0);
                      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                ((System_Array_o *)pSVar5,
                                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6072,
                                 (MethodInfo *)0x0);
                      pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
                      lVar2 = Method_System_Collections_Generic_List<string>_Add__;
                      pSVar7 = (__this->fields)._items;
                      (__this->fields)._version = (__this->fields)._version + 1;
                      if (pSVar7 != (System_Object_array *)0x0) {
                        uVar1 = (__this->fields)._size;
                        if (uVar1 < (uint)pSVar7->max_length) {
                          (__this->fields)._size = uVar1 + 1;
                          pSVar7->m_Items[(int)uVar1] = (Il2CppObject *)pSVar6;
                          thunk_FUN_01c20e04();
                        }
                        else {
                          System_Collections_Generic_List<object>__AddWithResize
                                    (__this,(Il2CppObject *)pSVar6,
                                     *(MethodInfo_26E4DAC **)
                                      (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                        }
                        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                  ((System_Array_o *)pSVar4,
                                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6073
                                   ,(MethodInfo *)0x0);
                        pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                  ((System_Array_o *)pSVar5,
                                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6074
                                   ,(MethodInfo *)0x0);
                        pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
                        lVar2 = Method_System_Collections_Generic_List<string>_Add__;
                        pSVar7 = (__this->fields)._items;
                    /* try { // try from 03326f3c to 03426f43 has its CatchHandler @ 03327068 */
                        (__this->fields)._version = (__this->fields)._version + 1;
                        if (pSVar7 != (System_Object_array *)0x0) {
                          uVar1 = (__this->fields)._size;
                          if (uVar1 < (uint)pSVar7->max_length) {
                    /* try { // try from 03326f5c to 03426f67 has its CatchHandler @ 0332705c */
                            (__this->fields)._size = uVar1 + 1;
                            pSVar7->m_Items[(int)uVar1] = (Il2CppObject *)pSVar6;
                            thunk_FUN_01c20e04();
                          }
                          else {
                    /* try { // try from 03326f70 to 03426f7f has its CatchHandler @ 03327064 */
                            System_Collections_Generic_List<object>__AddWithResize
                                      (__this,(Il2CppObject *)pSVar6,
                                       *(MethodInfo_26E4DAC **)
                                        (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                          }
                    /* try { // try from 03326f8c to 03426f97 has its CatchHandler @ 03327050 */
                          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                    ((System_Array_o *)pSVar4,
                                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6075
                                     ,(MethodInfo *)0x0);
                          pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                    ((System_Array_o *)pSVar5,
                                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6076
                                     ,(MethodInfo *)0x0);
                    /* try { // try from 03326fd8 to 03426ffb has its CatchHandler @ 03327060 */
                          pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
                          lVar2 = Method_System_Collections_Generic_List<string>_Add__;
                          pSVar7 = (__this->fields)._items;
                          (__this->fields)._version = (__this->fields)._version + 1;
                          if (pSVar7 != (System_Object_array *)0x0) {
                            uVar1 = (__this->fields)._size;
                    /* try { // try from 03326ffc to 0342703b has its CatchHandler @ 03326ce0 */
                            if (uVar1 < (uint)pSVar7->max_length) {
                              (__this->fields)._size = uVar1 + 1;
                              pSVar7->m_Items[(int)uVar1] = (Il2CppObject *)pSVar6;
                              thunk_FUN_01c20e04();
                            }
                            else {
                              System_Collections_Generic_List<object>__AddWithResize
                                        (__this,(Il2CppObject *)pSVar6,
                                         *(MethodInfo_26E4DAC **)
                                          (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                            }
                    /* try { // try from 0332703c to 03427043 has its CatchHandler @ 0332706c */
                            pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03327044 to 03427047 has its CatchHandler @ 03327058 */
                    /* try { // try from 03327048 to 0342704b has its CatchHandler @ 03327054 */
                    /* try { // try from 0332704c to 03427083 has its CatchHandler @ 03326ce0 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03326f8c with catch @ 03327050
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03327048 with catch @ 03327054
                        */
                            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                      ((System_Array_o *)pSVar4,
                                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6077
                                       ,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03327044 with catch @ 03327058
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03326f5c with catch @ 0332705c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03326fd8 with catch @ 03327060
                        */
                            pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03326f70 with catch @ 03327064
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03326f3c with catch @ 03327068
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0332703c with catch @ 0332706c
                        */
                            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                      ((System_Array_o *)pSVar5,
                                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6078
                                       ,(MethodInfo *)0x0);
                    /* try { // try from 03327084 to 03427087 has its CatchHandler @ 033270a8 */
                    /* try { // try from 03327088 to 034270af has its CatchHandler @ 03326ce0 */
                            pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
                            lVar2 = Method_System_Collections_Generic_List<string>_Add__;
                            pSVar7 = (__this->fields)._items;
                            (__this->fields)._version = (__this->fields)._version + 1;
                            if (pSVar7 != (System_Object_array *)0x0) {
                              uVar1 = (__this->fields)._size;
                    /* catch() { ... } // from try @ 03327084 with catch @ 033270a8 */
                    /* try { // try from 033270b0 to 034270b7 has its CatchHandler @ 033270cc */
                              if (uVar1 < (uint)pSVar7->max_length) {
                    /* try { // try from 033270b8 to 034270c3 has its CatchHandler @ 03326ce0 */
                                (__this->fields)._size = uVar1 + 1;
                    /* try { // try from 033270c4 to 034270cb has its CatchHandler @ 033270cc */
                                pSVar7->m_Items[(int)uVar1] = (Il2CppObject *)pSVar6;
                                thunk_FUN_01c20e04();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033270b0 with catch @ 033270cc
                       catch(type#2 @ 00000000) { ... } // from try @ 033270c4 with catch @ 033270cc
                        */
                              }
                              else {
                                System_Collections_Generic_List<object>__AddWithResize
                                          (__this,(Il2CppObject *)pSVar6,
                                           *(MethodInfo_26E4DAC **)
                                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                              }
                              pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                        ((System_Array_o *)pSVar4,
                                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6079
                                         ,(MethodInfo *)0x0);
                              pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                        ((System_Array_o *)pSVar5,
                                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6080
                                         ,(MethodInfo *)0x0);
                              pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
                              lVar2 = Method_System_Collections_Generic_List<string>_Add__;
                              pSVar7 = (__this->fields)._items;
                              (__this->fields)._version = (__this->fields)._version + 1;
                              if (pSVar7 != (System_Object_array *)0x0) {
                                uVar1 = (__this->fields)._size;
                                if (uVar1 < (uint)pSVar7->max_length) {
                                  (__this->fields)._size = uVar1 + 1;
                                  pSVar7->m_Items[(int)uVar1] = (Il2CppObject *)pSVar6;
                                  thunk_FUN_01c20e04();
                                }
                                else {
                                  System_Collections_Generic_List<object>__AddWithResize
                                            (__this,(Il2CppObject *)pSVar6,
                                             *(MethodInfo_26E4DAC **)
                                              (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                                }
                                GNNIOHGGHAF_TypeInfo->static_fields->OMPBOMHFJDN =
                                     (System_Collections_Generic_IReadOnlyList_string__o *)__this;
                                thunk_FUN_01c20e04(GNNIOHGGHAF_TypeInfo->static_fields,__this);
                                return GNNIOHGGHAF_TypeInfo->static_fields->OMPBOMHFJDN;
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

