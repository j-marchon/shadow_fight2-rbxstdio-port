// LEGDPJHPEOB$$DFAGIFLDKAP @ RVA 0x35449F4

bool LEGDPJHPEOB__DFAGIFLDKAP
               (LEGDPJHPEOB_o *__this,EILGGBOIMGE_FMFDKGKCBBG_o *BGKPFAEEAIE,
               EILGGBOIMGE_FMFDKGKCBBG_o *KJNOLMHHJJK,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_String_o *__this_00;
  System_String_o *value;
  
  if ((BGKPFAEEAIE != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) &&
     (__this_00 = (System_String_o *)
                  (*(BGKPFAEEAIE->klass->vtable)._3_ToString.methodPtr)
                            (BGKPFAEEAIE,(BGKPFAEEAIE->klass->vtable)._3_ToString.method),
     KJNOLMHHJJK != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0)) {
    value = (System_String_o *)
            (*(KJNOLMHHJJK->klass->vtable)._3_ToString.methodPtr)
                      (KJNOLMHHJJK,(KJNOLMHHJJK->klass->vtable)._3_ToString.method);
    iVar1 = (__this->fields).ACCIHBHMFPN;
    if ((__this->fields).ODLEBGINGIL == false) {
      if (iVar1 == 8) {
        if (__this_00 != (System_String_o *)0x0) {
          bVar2 = System_String__Contains(__this_00,value,5,(MethodInfo *)0x0);
          return bVar2;
        }
      }
      else if (iVar1 == 10) {
        if (__this_00 != (System_String_o *)0x0) {
          bVar2 = System_String__EndsWith(__this_00,value,5,(MethodInfo *)0x0);
          return bVar2;
        }
      }
      else {
        if (iVar1 != 9) {
          return false;
        }
        if (__this_00 != (System_String_o *)0x0) {
          bVar2 = System_String__StartsWith(__this_00,value,5,(MethodInfo *)0x0);
          return bVar2;
        }
      }
    }
    else if (iVar1 == 8) {
      if (__this_00 != (System_String_o *)0x0) {
        bVar2 = System_String__Contains(__this_00,value,(MethodInfo *)0x0);
        return bVar2;
      }
    }
    else if (iVar1 == 10) {
                    /* try { // try from 03644acc to 03744af3 has its CatchHandler @ 03645d40 */
      if (__this_00 != (System_String_o *)0x0) {
        bVar2 = System_String__EndsWith(__this_00,value,(MethodInfo *)0x0);
        return bVar2;
      }
    }
    else {
      if (iVar1 != 9) {
        return false;
      }
      if (__this_00 != (System_String_o *)0x0) {
        bVar2 = System_String__StartsWith(__this_00,value,(MethodInfo *)0x0);
        return bVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

