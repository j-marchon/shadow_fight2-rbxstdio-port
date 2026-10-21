// DBIJLEGANCE$$DALDBPICLKB @ RVA 0x32A4498

void DBIJLEGANCE__DALDBPICLKB
               (System_IO_Stream_o *AILODCHECLA,System_IO_Stream_o *AJLBDPAPMCD,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  
  if ((DAT_045673e0 & 1) == 0) {
    FUN_01bab630(&byte___TypeInfo);
    DAT_045673e0 = 1;
  }
  lVar2 = FUN_01bab718(byte___TypeInfo,0x200);
  if ((lVar2 != 0) && (AILODCHECLA != (System_IO_Stream_o *)0x0)) {
    uVar1 = (*(AILODCHECLA->klass->vtable)._33_unknown.methodPtr)
                      (AILODCHECLA,lVar2,0,(ulong)*(uint *)(lVar2 + 0x18),
                       (AILODCHECLA->klass->vtable)._33_unknown.method);
    while( true ) {
      if (uVar1 == 0) {
        return;
      }
      if (AJLBDPAPMCD == (System_IO_Stream_o *)0x0) break;
      (*(AJLBDPAPMCD->klass->vtable)._36_unknown.methodPtr)
                (AJLBDPAPMCD,lVar2,0,(ulong)uVar1,(AJLBDPAPMCD->klass->vtable)._36_unknown.method);
      uVar1 = (*(AILODCHECLA->klass->vtable)._33_unknown.methodPtr)
                        (AILODCHECLA,lVar2,0,(ulong)*(uint *)(lVar2 + 0x18),
                         (AILODCHECLA->klass->vtable)._33_unknown.method);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

