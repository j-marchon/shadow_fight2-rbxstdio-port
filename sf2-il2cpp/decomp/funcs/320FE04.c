// FPMAFHGLPOB$$NEFOBANKNIG @ RVA 0x320FE04

void FPMAFHGLPOB__NEFOBANKNIG(SimpleJSON_JSONObject_o *JHMENEKPIBO,MethodInfo *method)

{
  int iVar1;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar2;
  SimpleJSON_JSONNode_o *pSVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MGNPHCAAEIO_StaticFields *pMVar4;
  int32_t n;
  
  if ((DAT_04566e84 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3521);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3522);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04566e84 = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
    method = extraout_x1_00;
  }
  pMVar4 = MGNPHCAAEIO_TypeInfo->static_fields;
  iVar1 = pMVar4->KGPNMHJKPKF;
  n = iVar1;
  if (pMVar4->NKPIIAOHOKI != false) {
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
      pMVar4 = MGNPHCAAEIO_TypeInfo->static_fields;
    }
    n = 0;
    if (pMVar4->PGNCICJDLNP != 0) {
      n = iVar1 / pMVar4->PGNCICJDLNP;
    }
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3521,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3522,(MethodInfo *)0x0);
  pSVar2 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
  }
  pSVar3 = SimpleJSON_JSONNode__op_Implicit(n,(MethodInfo *)0x0);
  if (JHMENEKPIBO == (SimpleJSON_JSONObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Could not recover jumptable at 0x0330ff64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
            (JHMENEKPIBO,pSVar2,pSVar3,(JHMENEKPIBO->klass->vtable)._8_set_Item.method);
  return;
}

