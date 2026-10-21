// KKCBGIBKOCP$$CMMAOAPNOMN @ RVA 0x307717C

UnityEngine_Sprite_o *
KKCBGIBKOCP__CMMAOAPNOMN
          (System_String_o *OOKEKJMFKPE,System_String_o *HCAAAAMDCNO,bool CKNMMCNCCCL,
          bool GMDKAHCJGBD,bool NHOBJGPBONB,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  UnityEngine_Object_o *pUVar3;
  System_String_o *p_path;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)CKNMMCNCCCL;
  if ((DAT_04565fb6 & 1) == 0) {
    FUN_01bab630(&EEMAEBIOIKM_TypeInfo);
                    /* try { // try from 031771b8 to 032774d3 has its CatchHandler @ 031771b8
                       catch() { ... } // from try @ 031771b8 with catch @ 031771b8
                       catch() { ... } // from try @ 03177514 with catch @ 031771b8
                       catch() { ... } // from try @ 0317757c with catch @ 031771b8
                       catch() { ... } // from try @ 031775e4 with catch @ 031771b8
                       catch() { ... } // from try @ 0317764c with catch @ 031771b8
                       catch() { ... } // from try @ 031776b4 with catch @ 031771b8
                       catch() { ... } // from try @ 03177744 with catch @ 031771b8
                       catch() { ... } // from try @ 031777f8 with catch @ 031771b8
                       catch() { ... } // from try @ 03177a0c with catch @ 031771b8
                       catch() { ... } // from try @ 03177bcc with catch @ 031771b8
                       catch() { ... } // from try @ 03177c18 with catch @ 031771b8
                       catch() { ... } // from try @ 03177de0 with catch @ 031771b8
                       catch() { ... } // from try @ 03177e54 with catch @ 031771b8
                       catch() { ... } // from try @ 03177e8c with catch @ 031771b8
                       catch() { ... } // from try @ 03177f00 with catch @ 031771b8
                       catch() { ... } // from try @ 03177f3c with catch @ 031771b8
                       catch() { ... } // from try @ 03177fb0 with catch @ 031771b8
                       catch() { ... } // from try @ 03177fec with catch @ 031771b8
                       catch() { ... } // from try @ 03178078 with catch @ 031771b8
                       catch() { ... } // from try @ 031780b0 with catch @ 031771b8
                       catch() { ... } // from try @ 03178184 with catch @ 031771b8 */
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_ResourcesAndBundles_Load<Sprite>__);
    DAT_04565fb6 = 1;
  }
  pSVar2 = HCAAAAMDCNO;
  if (!CKNMMCNCCCL) {
    if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = KKCBGIBKOCP__NDDGJFHOCJO(HCAAAAMDCNO,GMDKAHCJGBD,method_00);
  }
  if (NHOBJGPBONB) {
    if ((EEMAEBIOIKM_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pUVar3 = (UnityEngine_Object_o *)
             EEMAEBIOIKM__GKMHEGHFEDN(OOKEKJMFKPE,HCAAAAMDCNO,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      return (UnityEngine_Sprite_o *)pUVar3;
    }
  }
  p_path = System_String__Concat(OOKEKJMFKPE,pSVar2,(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Object_o *)
           UnityEngine_ResourcesAndBundles__Load<object>
                     (p_path,Method_UnityEngine_ResourcesAndBundles_Load<Sprite>__);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar1) && (bVar1 = System_String__op_Inequality(pSVar2,HCAAAAMDCNO,(MethodInfo *)0x0), bVar1)
     ) {
    pSVar2 = System_String__Concat(OOKEKJMFKPE,HCAAAAMDCNO,(MethodInfo *)0x0);
    pUVar3 = (UnityEngine_Object_o *)
             UnityEngine_ResourcesAndBundles__Load<object>
                       (pSVar2,Method_UnityEngine_ResourcesAndBundles_Load<Sprite>__);
  }
  if (NHOBJGPBONB) {
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if ((EEMAEBIOIKM_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      EEMAEBIOIKM__GADEAHMJDCN
                (OOKEKJMFKPE,HCAAAAMDCNO,(UnityEngine_Sprite_o *)pUVar3,(MethodInfo *)0x0);
    }
  }
  return (UnityEngine_Sprite_o *)pUVar3;
}

