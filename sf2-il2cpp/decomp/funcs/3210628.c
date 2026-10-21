// FPMAFHGLPOB$$POLBDFMPDPH @ RVA 0x3210628

void FPMAFHGLPOB__POLBDFMPDPH
               (SimpleJSON_JSONObject_o *JHMENEKPIBO,MDNLIFLBFNO_o *BFPCMHPBAGL,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  AFFHKININGD_o *MHOFCOHFCGL;
  SimpleJSON_JSONNode_o *pSVar6;
  NLPJLHOEAOE_o *__this;
  MethodInfo *method_00;
  DNELIPCHKLK_o *pDVar7;
  System_String_o *pSVar8;
  float n;
  
  if ((DAT_04566e88 & 1) == 0) {
    FUN_01bab630(&AFFHKININGD_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3537);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3538);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3539);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3540);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3541);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3542);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3543);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3544);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3545);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3546);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3547);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3548);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3549);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3550);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566e88 = 1;
  }
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3537,(MethodInfo *)0x0);
                    /* try { // try from 03310788 to 0341094f has its CatchHandler @ 03310788
                       catch() { ... } // from try @ 03310788 with catch @ 03310788
                       catch() { ... } // from try @ 03310a3c with catch @ 03310788
                       catch() { ... } // from try @ 03310a80 with catch @ 03310788
                       catch() { ... } // from try @ 03310b2c with catch @ 03310788
                       catch() { ... } // from try @ 03310b70 with catch @ 03310788
                       catch() { ... } // from try @ 03310bb0 with catch @ 03310788 */
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3538,(MethodInfo *)0x0);
  pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
  if (BFPCMHPBAGL != (MDNLIFLBFNO_o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)BFPCMHPBAGL,
                       (Il2CppObject *)pSVar5,
                       Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    if (bVar2) {
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3539,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3540,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      MHOFCOHFCGL = (AFFHKININGD_o *)
                    System_Collections_Generic_Dictionary<object,_object>__get_Item
                              ((System_Collections_Generic_Dictionary_object__object__o *)
                               BFPCMHPBAGL,(Il2CppObject *)pSVar5,
                               Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__
                              );
      if (MHOFCOHFCGL != (AFFHKININGD_o *)0x0) {
        bVar1 = (AFFHKININGD_TypeInfo->_2).naturalAligment;
        if ((bVar1 <= (MHOFCOHFCGL->klass->_2).naturalAligment) &&
           ((MHOFCOHFCGL->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
            (Il2CppClass *)AFFHKININGD_TypeInfo)) {
          pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar3,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3541,
                     (MethodInfo *)0x0);
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3542,
                     (MethodInfo *)0x0);
          pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
          pDVar7 = (MHOFCOHFCGL->fields).KOILJHHCIEE;
          if (pDVar7 != (DNELIPCHKLK_o *)0x0) {
            pSVar8 = (pDVar7->fields).GDPFBDIJNHA;
            if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pSVar6 = SimpleJSON_JSONNode__op_Implicit(pSVar8,(MethodInfo *)0x0);
            if (JHMENEKPIBO != (SimpleJSON_JSONObject_o *)0x0) {
              (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                        (JHMENEKPIBO,pSVar5,pSVar6,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
              pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03310950 to 03410957 has its CatchHandler @ 03310b50 */
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar3,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3543,
                         (MethodInfo *)0x0);
              pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03310970 to 03410977 has its CatchHandler @ 03310b4c */
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar4,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3544,
                         (MethodInfo *)0x0);
                    /* try { // try from 0331098c to 03410993 has its CatchHandler @ 03310a58 */
              pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
              pDVar7 = (MHOFCOHFCGL->fields).KOILJHHCIEE;
              if (pDVar7 != (DNELIPCHKLK_o *)0x0) {
                    /* try { // try from 0331099c to 034109ab has its CatchHandler @ 03310a60 */
                pSVar6 = SimpleJSON_JSONNode__op_Implicit
                                   ((pDVar7->fields).GJFJPLHCBKJ,(MethodInfo *)0x0);
                    /* try { // try from 033109bc to 034109c3 has its CatchHandler @ 03310a54 */
                (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                          (JHMENEKPIBO,pSVar5,pSVar6,(JHMENEKPIBO->klass->vtable)._8_set_Item.method
                          );
                pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 033109cc to 034109d3 has its CatchHandler @ 03310a40 */
                    /* try { // try from 033109d8 to 034109ef has its CatchHandler @ 03310a5c */
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          ((System_Array_o *)pSVar3,
                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3545,
                           (MethodInfo *)0x0);
                pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 033109f8 to 03410a03 has its CatchHandler @ 03310a50 */
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          ((System_Array_o *)pSVar4,
                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3546,
                           (MethodInfo *)0x0);
                pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
                    /* try { // try from 03310a18 to 03410a1f has its CatchHandler @ 03310b48 */
                    /* try { // try from 03310a28 to 03410a2b has its CatchHandler @ 03310a4c */
                if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03310a30 to 03410a33 has its CatchHandler @ 03310a48 */
                  thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
                }
                    /* try { // try from 03310a38 to 03410a3b has its CatchHandler @ 03310a44 */
                    /* try { // try from 03310a3c to 03410a7b has its CatchHandler @ 03310788 */
                __this = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 033109cc with catch @ 03310a40 */
                if (__this != (NLPJLHOEAOE_o *)0x0) {
                    /* catch() { ... } // from try @ 03310a38 with catch @ 03310a44 */
                    /* catch() { ... } // from try @ 03310a30 with catch @ 03310a48 */
                    /* catch() { ... } // from try @ 03310a28 with catch @ 03310a4c */
                  pSVar8 = NLPJLHOEAOE__PGDMIFLKLJE
                                     (__this,(MHOFCOHFCGL->fields).JDNKKGPNHPB,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 033109f8 with catch @ 03310a50 */
                    /* catch() { ... } // from try @ 033109bc with catch @ 03310a54 */
                  pSVar6 = SimpleJSON_JSONNode__op_Implicit(pSVar8,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0331098c with catch @ 03310a58 */
                    /* catch() { ... } // from try @ 033109d8 with catch @ 03310a5c */
                    /* catch() { ... } // from try @ 0331099c with catch @ 03310a60 */
                  (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                            (JHMENEKPIBO,pSVar5,pSVar6,
                             (JHMENEKPIBO->klass->vtable)._8_set_Item.method);
                  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03310a7c to 03410a7f has its CatchHandler @ 03310b30 */
                    /* try { // try from 03310a80 to 03410b07 has its CatchHandler @ 03310788 */
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            ((System_Array_o *)pSVar3,
                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3547,
                             (MethodInfo *)0x0);
                  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            ((System_Array_o *)pSVar4,
                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3548,
                             (MethodInfo *)0x0);
                  pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
                  pDVar7 = (MHOFCOHFCGL->fields).KOILJHHCIEE;
                  if (pDVar7 != (DNELIPCHKLK_o *)0x0) {
                    pSVar6 = SimpleJSON_JSONNode__op_Implicit
                                       ((pDVar7->fields).ANOPJEEGOLJ,(MethodInfo *)0x0);
                    (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                              (JHMENEKPIBO,pSVar5,pSVar6,
                               (JHMENEKPIBO->klass->vtable)._8_set_Item.method);
                    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03310b08 to 03410b1b has its CatchHandler @ 03310bc4 */
                    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                              ((System_Array_o *)pSVar3,
                               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3549,
                               (MethodInfo *)0x0);
                    /* try { // try from 03310b1c to 03410b1f has its CatchHandler @ 03310b44 */
                    /* try { // try from 03310b20 to 03410b23 has its CatchHandler @ 03310b40 */
                    /* try { // try from 03310b24 to 03410b2b has its CatchHandler @ 03310b3c */
                    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03310b2c to 03410b6b has its CatchHandler @ 03310788 */
                    /* catch() { ... } // from try @ 03310a7c with catch @ 03310b30 */
                    /* catch() { ... } // from try @ 03310b24 with catch @ 03310b3c */
                    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                              ((System_Array_o *)pSVar4,
                               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3550,
                               (MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03310b20 with catch @ 03310b40 */
                    /* catch() { ... } // from try @ 03310b1c with catch @ 03310b44 */
                    /* catch() { ... } // from try @ 03310a18 with catch @ 03310b48 */
                    /* catch() { ... } // from try @ 03310970 with catch @ 03310b4c */
                    pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03310950 with catch @ 03310b50 */
                    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03310b6c to 03410b6f has its CatchHandler @ 03310b98 */
                      thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
                    }
                    /* try { // try from 03310b70 to 03410ba7 has its CatchHandler @ 03310788 */
                    n = MGNPHCAAEIO__HLFLDFDKDFN(MHOFCOHFCGL,(MethodInfo *)0x0);
                    method_00 = (MethodInfo *)SimpleJSON_JSONNode__op_Implicit(n,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03310b6c with catch @ 03310b98 */
                    (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                              (JHMENEKPIBO,pSVar5,method_00,
                               (JHMENEKPIBO->klass->vtable)._8_set_Item.method);
                    /* try { // try from 03310ba8 to 03410baf has its CatchHandler @ 03310bc4 */
                    /* try { // try from 03310bb0 to 03410bbb has its CatchHandler @ 03310788 */
                    FPMAFHGLPOB__EIDEBMKLLMO(JHMENEKPIBO,MHOFCOHFCGL,method_00);
                    return;
                  }
                }
              }
            }
          }
          goto LAB_03310bb8;
        }
      }
    }
    return;
  }
LAB_03310bb8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

