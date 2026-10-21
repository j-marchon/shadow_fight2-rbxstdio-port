// LEGDPJHPEOB$$LMBKEEOPFKD @ RVA 0x354E2BC

bool LEGDPJHPEOB__LMBKEEOPFKD
               (LEGDPJHPEOB_o *__this,EILGGBOIMGE_FMFDKGKCBBG_o *MDNDPPNLDCP,
               EILGGBOIMGE_FMFDKGKCBBG_o *OKFMDMKDMCP,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  LEGDPJHPEOB_o *__this_00;
  System_String_array *__this_01;
  MethodInfo *method_00;
  long lVar3;
  ulong uVar4;
  System_String_array *local_40;
  System_String_array *local_38;
  
  __this_00 = __this;
  method_00 = (MethodInfo *)OKFMDMKDMCP;
  if ((DAT_04568b34 & 1) == 0) {
    __this_00 = (LEGDPJHPEOB_o *)FUN_01bab630(&Method_Util_JGJFNOOGAEP<string[]>__);
    DAT_04568b34 = 1;
  }
  __this_01 = LEGDPJHPEOB__GGHIHLMENAC(__this_00,MDNDPPNLDCP,method_00);
  local_38 = __this_01;
  local_40 = LEGDPJHPEOB__GGHIHLMENAC((LEGDPJHPEOB_o *)__this_01,OKFMDMKDMCP,method_00);
  if ((__this_01 != (System_String_array *)0x0) && (local_40 != (System_String_array *)0x0)) {
    if ((int)local_40->max_length < (int)__this_01->max_length) {
      Util__JGJFNOOGAEP<object>
                ((Il2CppObject **)&local_38,(Il2CppObject **)&local_40,
                 Method_Util_JGJFNOOGAEP<string[]>__);
      __this_01 = local_38;
      if (local_38 == (System_String_array *)0x0) goto LAB_0364e39c;
    }
    lVar3 = 4;
    do {
      uVar1 = (uint)__this_01->max_length;
      uVar4 = lVar3 - 4;
      if ((long)(int)uVar1 <= (long)uVar4) {
LAB_0364e3a0:
        return (long)(int)uVar1 <= (long)uVar4;
      }
      if (uVar1 <= uVar4) {
LAB_0364e3c0:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      if (local_40 == (System_String_array *)0x0) break;
      if ((uint)local_40->max_length <= uVar4) goto LAB_0364e3c0;
      bVar2 = LEGDPJHPEOB__NJLKHFHAAHH
                        (__this,__this_01->m_Items[lVar3 + -4],local_40->m_Items[lVar3 + -4],method)
      ;
      if (!bVar2) goto LAB_0364e3a0;
      lVar3 = lVar3 + 1;
      __this_01 = local_38;
    } while (local_38 != (System_String_array *)0x0);
  }
LAB_0364e39c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

