// FPMAFHGLPOB$$FDGMBGNOIPC @ RVA 0x320DBBC

void FPMAFHGLPOB__FDGMBGNOIPC
               (SimpleJSON_JSONArray_o *JHMENEKPIBO,IGFGDDANEPE_o *IKKAMAMLIKA,MethodInfo *method)

{
  int32_t n;
  SimpleJSON_JSONObject_o *__this;
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  SimpleJSON_JSONNode_o *pSVar4;
  MethodInfo *method_00;
  HOOAAGABMBL_o *pHVar5;
  System_String_o *s;
  
  if ((DAT_04566e80 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3455);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3456);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3457);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3458);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3459);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3460);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3461);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3462);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONObject_TypeInfo);
    DAT_04566e80 = 1;
  }
  __this = (SimpleJSON_JSONObject_o *)thunk_FUN_01bda818(SimpleJSON_JSONObject_TypeInfo);
  SimpleJSON_JSONObject___ctor(__this,(MethodInfo *)0x0);
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3455,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3456,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  if (IKKAMAMLIKA != (IGFGDDANEPE_o *)0x0) {
    s = (IKKAMAMLIKA->fields).NPFMOEOIEKM;
    if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar4 = SimpleJSON_JSONNode__op_Implicit(s,(MethodInfo *)0x0);
    if (__this != (SimpleJSON_JSONObject_o *)0x0) {
      (*(__this->klass->vtable)._8_set_Item.methodPtr)
                (__this,pSVar3,pSVar4,(__this->klass->vtable)._8_set_Item.method);
      pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar1,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3457,
                 (MethodInfo *)0x0);
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3458,
                 (MethodInfo *)0x0);
      pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
      n = IGFGDDANEPE__LGIMDOAMCNG(IKKAMAMLIKA,(MethodInfo *)0x0);
      pSVar4 = SimpleJSON_JSONNode__op_Implicit(n,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._8_set_Item.methodPtr)
                (__this,pSVar3,pSVar4,(__this->klass->vtable)._8_set_Item.method);
      pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0330dde8 to 0340decf has its CatchHandler @ 0330dde8
                       catch() { ... } // from try @ 0330dde8 with catch @ 0330dde8
                       catch() { ... } // from try @ 0330df28 with catch @ 0330dde8
                       catch() { ... } // from try @ 0330df68 with catch @ 0330dde8
                       catch() { ... } // from try @ 0330df98 with catch @ 0330dde8
                       catch() { ... } // from try @ 0330dfc8 with catch @ 0330dde8 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar1,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3459,
                 (MethodInfo *)0x0);
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3460,
                 (MethodInfo *)0x0);
      pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
      pHVar5 = (IKKAMAMLIKA->fields).PCBECBEFJOI;
      if (pHVar5 != (HOOAAGABMBL_o *)0x0) {
        pSVar4 = SimpleJSON_JSONNode__op_Implicit
                           ((pHVar5->fields)._GMPAEDFIIHF_k__BackingField,(MethodInfo *)0x0);
        method_00 = (__this->klass->vtable)._8_set_Item.method;
        (*(__this->klass->vtable)._8_set_Item.methodPtr)(__this,pSVar3,pSVar4);
        pHVar5 = (IKKAMAMLIKA->fields).PCBECBEFJOI;
        pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar1,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3461,
                   (MethodInfo *)0x0);
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3462,
                   (MethodInfo *)0x0);
        pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
        FPMAFHGLPOB__JJPJJDHOFLE(pHVar5,__this,pSVar3,method_00);
        if (JHMENEKPIBO != (SimpleJSON_JSONArray_o *)0x0) {
                    /* try { // try from 0330ded0 to 0340ded7 has its CatchHandler @ 0330df78 */
                    /* WARNING: Could not recover jumptable at 0x0330dee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(JHMENEKPIBO->klass->vtable)._21_Add.methodPtr)
                    (JHMENEKPIBO,__this,(JHMENEKPIBO->klass->vtable)._21_Add.method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

