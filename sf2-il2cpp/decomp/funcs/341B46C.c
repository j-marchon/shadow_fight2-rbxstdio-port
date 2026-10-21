// HEFOANCOHDC$$NJEFAIIJLMA @ RVA 0x341B46C

/* WARNING: Type propagation algorithm not settling */

void HEFOANCOHDC__NJEFAIIJLMA
               (HEFOANCOHDC_o *__this,System_Text_StringBuilder_o *CJFMGFBAMEP,
               System_String_o *HHHAAGDPOKH,System_String_o *GKBNFBINIIP,float EPABIKKLOAP,
               MethodInfo *method)

{
  System_Object_array *args;
  long lVar1;
  Il2CppObject *pIVar2;
  undefined8 uVar3;
  float local_38 [2];
  
  if ((DAT_045680cc & 1) == 0) {
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&float_TypeInfo);
    FUN_01bab630(&StringLiteral_2439);
    DAT_045680cc = 1;
  }
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,4);
  if (args == (System_Object_array *)0x0) {
LAB_0351b628:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((HHHAAGDPOKH != (System_String_o *)0x0) &&
     (lVar1 = thunk_FUN_01bda71c(HHHAAGDPOKH,(((args->obj).klass)->_1).element_class), lVar1 == 0))
  {
LAB_0351b61c:
    uVar3 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(uVar3,0);
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = (Il2CppObject *)HHHAAGDPOKH;
    thunk_FUN_01c20e04(args->m_Items,HHHAAGDPOKH);
    local_38[1] = 0.7;
    pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(float_TypeInfo,local_38 + 1);
    if ((pIVar2 != (Il2CppObject *)0x0) &&
       (lVar1 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar1 == 0))
    goto LAB_0351b61c;
    if (1 < (uint)args->max_length) {
      args->m_Items[1] = pIVar2;
      thunk_FUN_01c20e04(args->m_Items + 1,pIVar2);
      if ((GKBNFBINIIP != (System_String_o *)0x0) &&
         (lVar1 = thunk_FUN_01bda71c(GKBNFBINIIP,(((args->obj).klass)->_1).element_class),
         lVar1 == 0)) goto LAB_0351b61c;
      if (2 < (uint)args->max_length) {
        args->m_Items[2] = (Il2CppObject *)GKBNFBINIIP;
        thunk_FUN_01c20e04(args->m_Items + 2,GKBNFBINIIP);
        local_38[0] = EPABIKKLOAP;
        pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(float_TypeInfo,local_38);
        if ((pIVar2 != (Il2CppObject *)0x0) &&
           (lVar1 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar1 == 0))
        goto LAB_0351b61c;
        if (3 < (uint)args->max_length) {
          args->m_Items[3] = pIVar2;
          thunk_FUN_01c20e04(args->m_Items + 3,pIVar2);
          if (CJFMGFBAMEP != (System_Text_StringBuilder_o *)0x0) {
            System_Text_StringBuilder__AppendFormat
                      (CJFMGFBAMEP,StringLiteral_2439,args,(MethodInfo *)0x0);
            return;
          }
          goto LAB_0351b628;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

