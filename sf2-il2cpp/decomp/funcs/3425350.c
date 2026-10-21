// PEEIMHCMDND$$DKBMICAMHBE @ RVA 0x3425350

int64_t PEEIMHCMDND__DKBMICAMHBE
                  (PEEIMHCMDND_o *__this,SimpleJSON_JSONNode_o *GMDFNEFPFJH,MethodInfo *method)

{
  int32_t iVar1;
  SimpleJSON_JSONNode_o *JHMENEKPIBO;
  int64_t iVar2;
  
  if ((DAT_04568100 & 1) == 0) {
    __this = (PEEIMHCMDND_o *)FUN_01bab630(&StringLiteral_19522);
    DAT_04568100 = 1;
  }
  iVar1 = PEEIMHCMDND__IOOHCELHEIO(__this,GMDFNEFPFJH,method);
  if (iVar1 == 2) {
    if (GMDFNEFPFJH != (SimpleJSON_JSONNode_o *)0x0) {
      JHMENEKPIBO = (SimpleJSON_JSONNode_o *)
                    (*(GMDFNEFPFJH->klass->vtable)._7_get_Item.methodPtr)
                              (GMDFNEFPFJH,StringLiteral_19522,
                               (GMDFNEFPFJH->klass->vtable)._7_get_Item.method);
      iVar2 = OGMFFOMHGIA__HNIGPBMJJOL(JHMENEKPIBO,0,(MethodInfo *)0x0);
      return iVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return 0;
}

