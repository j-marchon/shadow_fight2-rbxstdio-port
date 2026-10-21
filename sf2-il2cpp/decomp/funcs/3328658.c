// PCEDNFLCPPF$$DNLODALMDGM @ RVA 0x3328658

SimpleJSON_JSONArray_o * PCEDNFLCPPF__DNLODALMDGM(PCEDNFLCPPF_o *__this,MethodInfo *method)

{
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  ulong uVar4;
  SimpleJSON_JSONArray_o *pSVar5;
  long *plVar6;
  SimpleJSON_JSONNode_o *pSVar7;
  
  if ((DAT_045678b3 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3109);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3110);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3111);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3112);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3113);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3114);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONArray_TypeInfo);
    DAT_045678b3 = 1;
  }
                    /* try { // try from 034286f8 to 0352871f has its CatchHandler @ 034288f8 */
  pSVar7 = (__this->fields).HHCKEAILEEN;
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3109,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3110,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  if (pSVar7 != (SimpleJSON_JSONNode_o *)0x0) {
                    /* try { // try from 03428754 to 0352877f has its CatchHandler @ 034288f4 */
    uVar4 = (*(pSVar7->klass->vtable)._26_HasKey.methodPtr)
                      (pSVar7,pSVar3,(pSVar7->klass->vtable)._26_HasKey.method);
    if ((uVar4 & 1) == 0) {
      pSVar7 = (__this->fields).HHCKEAILEEN;
      pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar1,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3111,
                 (MethodInfo *)0x0);
                    /* try { // try from 03428788 to 035287cf has its CatchHandler @ 03428900 */
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3112,
                 (MethodInfo *)0x0);
      pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
      pSVar5 = (SimpleJSON_JSONArray_o *)thunk_FUN_01bda818(SimpleJSON_JSONArray_TypeInfo);
      SimpleJSON_JSONArray___ctor(pSVar5,(MethodInfo *)0x0);
      if (pSVar7 == (SimpleJSON_JSONNode_o *)0x0) goto LAB_03428894;
      (*(pSVar7->klass->vtable)._20_Add.methodPtr)
                (pSVar7,pSVar3,pSVar5,(pSVar7->klass->vtable)._20_Add.method);
    }
    pSVar7 = (__this->fields).HHCKEAILEEN;
                    /* try { // try from 03428810 to 03528833 has its CatchHandler @ 034288ec */
    pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar1,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3113,(MethodInfo *)0x0)
    ;
                    /* try { // try from 03428834 to 035288c7 has its CatchHandler @ 034283f0 */
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3114,(MethodInfo *)0x0)
    ;
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
    if (pSVar7 != (SimpleJSON_JSONNode_o *)0x0) {
      plVar6 = (long *)(*(pSVar7->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar7,pSVar3,(pSVar7->klass->vtable)._7_get_Item.method);
      if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03428890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pSVar5 = (SimpleJSON_JSONArray_o *)
                 (**(code **)(*plVar6 + 0x3c8))(plVar6,*(undefined8 *)(*plVar6 + 0x3d0));
        return pSVar5;
      }
    }
  }
LAB_03428894:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

