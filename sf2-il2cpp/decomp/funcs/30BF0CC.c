// Nekki.SF2.Core.ApplicationController$$Init @ RVA 0x30BF0CC

void Nekki_SF2_Core_ApplicationController__Init(MethodInfo *method)

{
  bool bVar1;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *name;
  UnityEngine_Object_o *target;
  System_Action_o *BLMFLPJJMPF;
  Nekki_SF2_Core_ApplicationController_o **ppNVar2;
  Nekki_SF2_Core_ApplicationController_o *pNVar3;
  
  if ((DAT_04566275 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_Core_ApplicationController_JBHLBNEBFAM__);
    FUN_01bab630(&Nekki_SF2_Core_ApplicationController_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2800);
                    /* try { // try from 031bf128 to 032bf2ab has its CatchHandler @ 031bf128
                       catch() { ... } // from try @ 031bf128 with catch @ 031bf128
                       catch() { ... } // from try @ 031bf348 with catch @ 031bf128
                       catch() { ... } // from try @ 031bf3d8 with catch @ 031bf128
                       catch() { ... } // from try @ 031bf474 with catch @ 031bf128 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2801);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<ApplicationController>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566275 = 1;
  }
  pNVar3 = Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->KNOHKIKFEBL;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2800,(MethodInfo *)0x0)
    ;
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2801,(MethodInfo *)0x0)
    ;
    name = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    target = (UnityEngine_Object_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)target,name,(MethodInfo *)0x0);
    if (target != (UnityEngine_Object_o *)0x0) {
      pNVar3 = (Nekki_SF2_Core_ApplicationController_o *)
               UnityEngine_GameObject__AddComponent<object>
                         ((UnityEngine_GameObject_o *)target,
                          Method_UnityEngine_GameObject_AddComponent<ApplicationController>__);
      ppNVar2 = &Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->KNOHKIKFEBL;
      *ppNVar2 = pNVar3;
      thunk_FUN_01c20e04(ppNVar2,pNVar3);
      BLMFLPJJMPF = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      CodeStage_AntiCheat_Detectors_ObscuredCheatingDetector__StartDetection
                (BLMFLPJJMPF,(MethodInfo *)0x0);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 031bf2ac to 032bf2d3 has its CatchHandler @ 031bf3ec */
      UnityEngine_Object__DontDestroyOnLoad(target,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

