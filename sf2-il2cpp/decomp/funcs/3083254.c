// KFCFGKEHPNK$$CJFHNCGHAPF @ RVA 0x3083254

void KFCFGKEHPNK__CJFHNCGHAPF
               (ClanLogoImage_o *GPPDAEOOLLN,System_String_o *NEJHIEOHMCF,int32_t OHLDDIANEPE,
               float JKOJPEKLBCI,MethodInfo *method)

{
  UnityEngine_Transform_o *transform;
  
  if (GPPDAEOOLLN != (ClanLogoImage_o *)0x0) {
    transform = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)GPPDAEOOLLN,(MethodInfo *)0x0);
    UnityEngine_TransformExtensions__SetLocalScale(transform,JKOJPEKLBCI,(MethodInfo *)0x0);
    ClanLogoImage__Refresh(GPPDAEOOLLN,NEJHIEOHMCF,OHLDDIANEPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

