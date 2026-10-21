// Core.Network.ServerProvider$$ReceiveXsollaPurchaseToken @ RVA 0x3576090

void Core_Network_ServerProvider__ReceiveXsollaPurchaseToken
               (Core_Network_ServerProvider_o *__this,System_String_o *JHDEDPMNOOJ,
               System_Action_bool__string__object__o *BLMFLPJJMPF,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *CELOLGNMKCG;
  MethodInfo *in_x4;
  
  if ((DAT_04568c89 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_926);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_927);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04568c89 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_926,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_927,(MethodInfo *)0x0);
  CELOLGNMKCG = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  Core_Network_ServerProvider__EEJKIAEDLDO(__this,JHDEDPMNOOJ,CELOLGNMKCG,BLMFLPJJMPF,in_x4);
  return;
}

