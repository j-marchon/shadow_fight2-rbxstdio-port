// KFCFGKEHPNK$$LEIGOOFFFPE @ RVA 0x308334C

ClanLogoImage_o *
KFCFGKEHPNK__LEIGOOFFFPE
          (UnityEngine_Transform_o *ODNJEHJPBGA,System_String_o *NEJHIEOHMCF,int32_t OHLDDIANEPE,
          float JKOJPEKLBCI,MethodInfo *method)

{
  Il2CppObject *original;
  UnityEngine_GameObject_o *__this;
  ClanLogoImage_o *__this_00;
  UnityEngine_Transform_o *transform;
  
  if ((DAT_04566011 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ClanLogoImage>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Resources_Load<GameObject>__);
    FUN_01bab630(&StringLiteral_10409);
    DAT_04566011 = 1;
  }
  original = UnityEngine_Resources__Load<object>
                       (StringLiteral_10409,Method_UnityEngine_Resources_Load<GameObject>__);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  __this = (UnityEngine_GameObject_o *)
           UnityEngine_Object__Instantiate<object>
                     (original,ODNJEHJPBGA,Method_UnityEngine_Object_Instantiate<GameObject>__);
  if ((__this != (UnityEngine_GameObject_o *)0x0) &&
     (__this_00 = (ClanLogoImage_o *)
                  UnityEngine_GameObject__GetComponent<object>
                            (__this,Method_UnityEngine_GameObject_GetComponent<ClanLogoImage>__),
     __this_00 != (ClanLogoImage_o *)0x0)) {
    transform = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    UnityEngine_TransformExtensions__SetLocalScale(transform,JKOJPEKLBCI,(MethodInfo *)0x0);
    ClanLogoImage__Refresh(__this_00,NEJHIEOHMCF,OHLDDIANEPE,(MethodInfo *)0x0);
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

