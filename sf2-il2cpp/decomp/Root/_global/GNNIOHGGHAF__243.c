// TypeDefIndex 243
// Namespace: 
// public class GNNIOHGGHAF : IEJKLPPLHMO
// Fields:
//   private static IReadOnlyList<string> OMPBOMHFJDN; // 0x0
//   private readonly SerialDisposable PIGOLBGJAEA; // 0x10
//   private float HLJCHNGJMLB; // 0x18
//   private string FHPNAJENHNG; // 0x20

// ===== public IEnumerable<string> DLKKPFHKIPB()  [RVA 0x322647C]
// GNNIOHGGHAF$$DLKKPFHKIPB @ RVA 0x322647C

System_Collections_Generic_IEnumerable_string__o *
GNNIOHGGHAF__DLKKPFHKIPB(GNNIOHGGHAF_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
  if ((DAT_04566f7b & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6051);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6052);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04566f7b = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6051,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6052,(MethodInfo *)0x0);
  item = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pSVar3->m_Items[(int)uVar1] = (Il2CppObject *)item;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      return (System_Collections_Generic_IEnumerable_string__o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ALABLDEODLA KCBILPIAPHN()  [RVA 0x32265EC]
// GNNIOHGGHAF$$KCBILPIAPHN @ RVA 0x32265EC

int32_t GNNIOHGGHAF__KCBILPIAPHN(GNNIOHGGHAF_o *__this,MethodInfo *method)

{
  return 1;
}


// ===== private static IReadOnlyList<string> OLONNBEDLLI()  [RVA 0x32265F4]
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


// ===== private IEnumerator CJEJLPKBFGF()  [RVA 0x32271D4]
// GNNIOHGGHAF$$CJEJLPKBFGF @ RVA 0x32271D4

System_Collections_IEnumerator_o *
GNNIOHGGHAF__CJEJLPKBFGF(GNNIOHGGHAF_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566f7d & 1) == 0) {
    FUN_01bab630(&GNNIOHGGHAF_FMJJKFICHKL_TypeInfo);
    DAT_04566f7d = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(GNNIOHGGHAF_FMJJKFICHKL_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== public string AJJLBBCJAAL(string[] OPAEPDIIOEB)  [RVA 0x3227268]
// GNNIOHGGHAF$$AJJLBBCJAAL @ RVA 0x3227268

System_String_o *
GNNIOHGGHAF__AJJLBBCJAAL(GNNIOHGGHAF_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  bool bVar7;
  int32_t maxExclusive;
  System_Byte_array *pSVar8;
  System_Byte_array *pSVar9;
  System_String_o *pSVar10;
  System_String_o *pSVar11;
  System_String_o *pSVar12;
  System_Collections_Generic_IReadOnlyList_string__o *pSVar13;
  VirtualInvokeData *pVVar14;
  System_Nullable_int__Fields method_00;
  MethodInfo *pMVar15;
  System_Nullable_float__o SVar16;
  System_Func_IEnumerator__o *coroutine;
  System_IObservable_Unit__o *source;
  System_IDisposable_o *value;
  System_Collections_Generic_IReadOnlyList_string__c *pSVar17;
  ulong uVar18;
  int32_t *piVar19;
  UniRx_SerialDisposable_o *__this_00;
  uint uVar20;
  System_String_o **ppSVar21;
  float fVar22;
  undefined4 local_54;
  
  if ((DAT_04566f7e & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6081);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6082);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6083);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6084);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6085);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6086);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6087);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6088);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6089);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6090);
                    /* try { // try from 0332732c to 0342746f has its CatchHandler @ 0332732c
                       catch() { ... } // from try @ 0332732c with catch @ 0332732c
                       catch() { ... } // from try @ 033274f4 with catch @ 0332732c
                       catch() { ... } // from try @ 03327598 with catch @ 0332732c
                       catch() { ... } // from try @ 033275cc with catch @ 0332732c
                       catch() { ... } // from try @ 03327600 with catch @ 0332732c */
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_Func<IEnumerator>_TypeInfo);
    FUN_01bab630(&Method_GNNIOHGGHAF_CJEJLPKBFGF__);
    FUN_01bab630(&System_Collections_Generic_IReadOnlyCollection<string>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IReadOnlyList<string>_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<float>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<int>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<float>_get_HasValue__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    DAT_04566f7e = 1;
  }
  local_54 = 0;
  pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar8,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6081,(MethodInfo *)0x0);
  pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar9,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6082,(MethodInfo *)0x0);
  pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
  bVar7 = Nekki_SF2_GUI_Dialogs_DownloadingScreen__Exists((MethodInfo *)0x0);
  if (bVar7) {
    pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar8,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6083,(MethodInfo *)0x0)
    ;
    pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar9,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6084,(MethodInfo *)0x0)
    ;
    pSVar11 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
                    /* try { // try from 03327470 to 03427477 has its CatchHandler @ 033275b4 */
    pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0332748c to 03427493 has its CatchHandler @ 033275ac */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar8,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6085,(MethodInfo *)0x0)
    ;
    pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 033274a0 to 034274a7 has its CatchHandler @ 033275a4 */
                    /* try { // try from 033274b0 to 034274b7 has its CatchHandler @ 033275a8 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar9,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6086,(MethodInfo *)0x0)
    ;
                    /* try { // try from 033274c0 to 034274cb has its CatchHandler @ 0332759c */
    pSVar12 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
    pSVar12 = System_String__Concat(pSVar12,pSVar11,(MethodInfo *)0x0);
                    /* try { // try from 033274e4 to 034274f3 has its CatchHandler @ 03327598 */
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
                    /* try { // try from 033274f4 to 0342758f has its CatchHandler @ 0332732c */
    UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar12,(MethodInfo *)0x0);
    pSVar10 = System_String__Concat(pSVar10,pSVar11,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Dialogs_DownloadingScreen__Destroy((MethodInfo *)0x0);
  }
  if (OPAEPDIIOEB == (System_String_array *)0x0) goto LAB_033278dc;
  if ((int)OPAEPDIIOEB->max_length < 1) {
LAB_033275ec:
                    /* catch() { ... } // from try @ 033275c8 with catch @ 033275f0 */
                    /* try { // try from 033275f8 to 034275ff has its CatchHandler @ 03327618 */
    method_00 = (System_Nullable_int__Fields)
                AJAMDCEKAFE__NANCFCIGNEE(0,OPAEPDIIOEB,(MethodInfo *)0x0);
    uVar20 = method_00.value;
                    /* try { // try from 03327600 to 0342760f has its CatchHandler @ 0332732c */
  }
  else {
    pSVar12 = OPAEPDIIOEB->m_Items[0];
    pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar8,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6087,(MethodInfo *)0x0)
    ;
    pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar9,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6088,(MethodInfo *)0x0)
    ;
    pSVar11 = OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
                    /* try { // try from 03327590 to 03427593 has its CatchHandler @ 033275b0 */
                    /* try { // try from 03327594 to 03427597 has its CatchHandler @ 033275a0 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033274e4 with catch @ 03327598
                       try { // try from 03327598 to 034275c7 has its CatchHandler @ 0332732c */
    bVar7 = System_String__op_Equality(pSVar12,pSVar11,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033274c0 with catch @ 0332759c
                        */
    if (!bVar7) goto LAB_033275ec;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03327594 with catch @ 033275a0
                        */
    pSVar13 = GNNIOHGGHAF__OLONNBEDLLI((MethodInfo *)(ulong)bVar7);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033274a0 with catch @ 033275a4
                        */
    if (pSVar13 == (System_Collections_Generic_IReadOnlyList_string__o *)0x0) goto LAB_033278dc;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033274b0 with catch @ 033275a8
                        */
    pSVar17 = pSVar13->klass;
    uVar2._0_1_ = (pSVar17->_2).rank;
    uVar2._1_1_ = (pSVar17->_2).minimumAlignment;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0332748c with catch @ 033275ac
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03327590 with catch @ 033275b0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03327470 with catch @ 033275b4
                        */
    uVar18 = (ulong)uVar2;
    if (uVar18 != 0) {
      piVar19 = &((pSVar17->_1).interfaceOffsets)->offset;
      do {
                    /* try { // try from 033275c8 to 034275cb has its CatchHandler @ 033275f0 */
                    /* try { // try from 033275cc to 034275f7 has its CatchHandler @ 0332732c */
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IReadOnlyCollection<string>_TypeInfo) {
          pVVar14 = pSVar17->vtable + *piVar19;
          goto LAB_03327610;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    pVVar14 = (VirtualInvokeData *)
              FUN_01b81914(pSVar13,System_Collections_Generic_IReadOnlyCollection<string>_TypeInfo,0
                          );
LAB_03327610:
                    /* try { // try from 03327610 to 03427617 has its CatchHandler @ 03327618 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033275f8 with catch @ 03327618
                       catch(type#2 @ 00000000) { ... } // from try @ 03327610 with catch @ 03327618
                        */
    maxExclusive = (*pVVar14->methodPtr)(pSVar13,pVVar14->method);
    method_00._0_4_ = UnityEngine_Random__Range(0,maxExclusive,(MethodInfo *)0x0);
    method_00.value = 0;
    uVar20 = method_00._0_4_;
  }
  pSVar13 = GNNIOHGGHAF__OLONNBEDLLI((MethodInfo *)method_00);
  if (pSVar13 != (System_Collections_Generic_IReadOnlyList_string__o *)0x0) {
    pSVar17 = pSVar13->klass;
    uVar3._0_1_ = (pSVar17->_2).rank;
    uVar3._1_1_ = (pSVar17->_2).minimumAlignment;
    uVar18 = (ulong)uVar3;
    if (uVar18 != 0) {
      piVar19 = &((pSVar17->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IReadOnlyCollection<string>_TypeInfo) {
          pVVar14 = pSVar17->vtable + *piVar19;
          goto LAB_03327688;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    pVVar14 = (VirtualInvokeData *)
              FUN_01b81914(pSVar13,System_Collections_Generic_IReadOnlyCollection<string>_TypeInfo,0
                          );
LAB_03327688:
    pMVar15 = (MethodInfo *)(*pVVar14->methodPtr)(pSVar13,pVVar14->method);
    uVar6 = (int)pMVar15 - 1;
    if ((int)uVar20 <= (int)uVar6) {
      uVar6 = uVar20;
    }
    uVar1 = 0;
    if (-1 < (int)uVar20) {
      uVar1 = uVar6;
    }
    pSVar13 = GNNIOHGGHAF__OLONNBEDLLI(pMVar15);
    if (pSVar13 != (System_Collections_Generic_IReadOnlyList_string__o *)0x0) {
      pSVar17 = pSVar13->klass;
      uVar4._0_1_ = (pSVar17->_2).rank;
      uVar4._1_1_ = (pSVar17->_2).minimumAlignment;
      uVar18 = (ulong)uVar4;
      if (uVar18 != 0) {
        piVar19 = &((pSVar17->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IReadOnlyList<string>_TypeInfo) {
            pVVar14 = pSVar17->vtable + *piVar19;
            goto LAB_03327718;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      pVVar14 = (VirtualInvokeData *)
                FUN_01b81914(pSVar13,System_Collections_Generic_IReadOnlyList<string>_TypeInfo,0);
LAB_03327718:
      pSVar11 = (System_String_o *)(*pVVar14->methodPtr)(pSVar13,(ulong)uVar1,pVVar14->method);
      ppSVar21 = &(__this->fields).FHPNAJENHNG;
      *ppSVar21 = pSVar11;
      thunk_FUN_01c20e04(ppSVar21);
      SVar16 = AJAMDCEKAFE__FOKFAIPDIMB(1,OPAEPDIIOEB,(MethodInfo *)0x0);
      fVar22 = 30.0;
      if (((ulong)SVar16.fields & 0xff) != 0) {
        fVar22 = SVar16.fields.value;
      }
      (__this->fields).HLJCHNGJMLB = fVar22;
      pSVar8 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar8,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6089,
                 (MethodInfo *)0x0);
      pSVar9 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar9,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6090,
                 (MethodInfo *)0x0);
      pMVar15 = (MethodInfo *)OMHODMCHILE__NPKGDBHJKCK(pSVar8,pSVar9,(MethodInfo *)0x0);
      pSVar13 = GNNIOHGGHAF__OLONNBEDLLI(pMVar15);
      if (pSVar13 != (System_Collections_Generic_IReadOnlyList_string__o *)0x0) {
        pSVar17 = pSVar13->klass;
        uVar5._0_1_ = (pSVar17->_2).rank;
        uVar5._1_1_ = (pSVar17->_2).minimumAlignment;
        uVar18 = (ulong)uVar5;
        if (uVar18 != 0) {
          piVar19 = &((pSVar17->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
                (Il2CppClass *)System_Collections_Generic_IReadOnlyCollection<string>_TypeInfo) {
              pVVar14 = pSVar17->vtable + *piVar19;
              goto LAB_03327820;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        pVVar14 = (VirtualInvokeData *)
                  FUN_01b81914(pSVar13,
                               System_Collections_Generic_IReadOnlyCollection<string>_TypeInfo,0);
LAB_03327820:
        local_54 = (*pVVar14->methodPtr)(pSVar13,pVVar14->method);
        pSVar11 = System_Int32__ToString((int32_t)&local_54,(MethodInfo *)0x0);
        pSVar10 = System_String__Concat
                            (pSVar10,(System_String_o *)pMVar15,pSVar11,(MethodInfo *)0x0);
        __this_00 = (__this->fields).PIGOLBGJAEA;
        coroutine = (System_Func_IEnumerator__o *)
                    thunk_FUN_01bda818(System_Func<IEnumerator>_TypeInfo);
        System_Func<object>___ctor();
        if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        source = UniRx_Observable__FromCoroutine(coroutine,false,(MethodInfo *)0x0);
        value = UniRx_ObservableExtensions__Subscribe<Unit>
                          ((System_IObservable_T__o *)source,
                           Method_UniRx_ObservableExtensions_Subscribe<Unit>__);
        if (__this_00 != (UniRx_SerialDisposable_o *)0x0) {
          UniRx_SerialDisposable__set_Disposable(__this_00,value,(MethodInfo *)0x0);
          return pSVar10;
        }
      }
    }
  }
LAB_033278dc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool ECKDICODLME()  [RVA 0x32278E0]
// GNNIOHGGHAF$$ECKDICODLME @ RVA 0x32278E0

bool GNNIOHGGHAF__ECKDICODLME(GNNIOHGGHAF_o *__this,MethodInfo *method)

{
  return true;
}


// ===== public string IGMDDJFPIJL()  [RVA 0x32278E8]
// GNNIOHGGHAF$$IGMDDJFPIJL @ RVA 0x32278E8

System_String_o * GNNIOHGGHAF__IGMDDJFPIJL(GNNIOHGGHAF_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_04566f7f & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_74);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6091);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04566f7f = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6091,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_74,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void .ctor()  [RVA 0x3227998]
// GNNIOHGGHAF$$.ctor @ RVA 0x3227998

void GNNIOHGGHAF___ctor(GNNIOHGGHAF_o *__this,MethodInfo *method)

{
  UniRx_SerialDisposable_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566f80 & 1) == 0) {
    FUN_01bab630(&UniRx_SerialDisposable_TypeInfo);
    DAT_04566f80 = 1;
    method = extraout_x1;
  }
  __this_00 = (UniRx_SerialDisposable_o *)thunk_FUN_01bda818(UniRx_SerialDisposable_TypeInfo,method)
  ;
  UniRx_SerialDisposable___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).PIGOLBGJAEA = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

