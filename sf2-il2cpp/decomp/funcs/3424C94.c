// PEEIMHCMDND$$IOOHCELHEIO @ RVA 0x3424C94

int32_t PEEIMHCMDND__IOOHCELHEIO
                  (PEEIMHCMDND_o *__this,SimpleJSON_JSONNode_o *GMDFNEFPFJH,MethodInfo *method)

{
  int32_t iVar1;
  SimpleJSON_JSONNode_o *JHMENEKPIBO;
  
  if ((DAT_045680fa & 1) == 0) {
    __this = (PEEIMHCMDND_o *)FUN_01bab630(&StringLiteral_21920);
    DAT_045680fa = 1;
  }
  if (GMDFNEFPFJH != (SimpleJSON_JSONNode_o *)0x0) {
    JHMENEKPIBO = (SimpleJSON_JSONNode_o *)
                  (*(GMDFNEFPFJH->klass->vtable)._7_get_Item.methodPtr)
                            (GMDFNEFPFJH,StringLiteral_21920,
                             (GMDFNEFPFJH->klass->vtable)._7_get_Item.method);
    iVar1 = OGMFFOMHGIA__EHJNCGCICMP(JHMENEKPIBO,0,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

