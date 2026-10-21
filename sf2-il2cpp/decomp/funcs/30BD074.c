// BMMAPANJCEC$$ToString @ RVA 0x30BD074

System_String_o * BMMAPANJCEC__ToString(BMMAPANJCEC_o *__this,MethodInfo *method)

{
  System_String_array *values;
  System_String_o *pSVar1;
  GNJBJKEJEGC_o *pGVar2;
  
  if ((DAT_04566258 & 1) == 0) {
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_47);
    DAT_04566258 = 1;
  }
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
  pGVar2 = (__this->fields).EHENNILDPMD;
  if (pGVar2 == (GNJBJKEJEGC_o *)0x0) {
    pSVar1 = (System_String_o *)0x0;
  }
  else {
    pSVar1 = (System_String_o *)
             (*(pGVar2->klass->vtable)._3_ToString.methodPtr)
                       (pGVar2,(pGVar2->klass->vtable)._3_ToString.method);
  }
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = pSVar1;
      thunk_FUN_01c20e04(values->m_Items);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = StringLiteral_47;
        thunk_FUN_01c20e04();
        pGVar2 = (__this->fields).MEGGHJNADEN;
        if (pGVar2 == (GNJBJKEJEGC_o *)0x0) {
          pSVar1 = (System_String_o *)0x0;
        }
        else {
          pSVar1 = (System_String_o *)
                   (*(pGVar2->klass->vtable)._3_ToString.methodPtr)
                             (pGVar2,(pGVar2->klass->vtable)._3_ToString.method);
        }
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = pSVar1;
          thunk_FUN_01c20e04(values->m_Items + 2);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = StringLiteral_47;
            thunk_FUN_01c20e04(values->m_Items + 3);
            pSVar1 = System_Object__ToString((Il2CppObject *)__this,(MethodInfo *)0x0);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = pSVar1;
              thunk_FUN_01c20e04();
              pSVar1 = System_String__Concat(values,(MethodInfo *)0x0);
              return pSVar1;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

