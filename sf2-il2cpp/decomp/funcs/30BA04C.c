// Nekki.SF2.GUI.TextPic.AGJBBBFDHCF$$ToString @ RVA 0x30BA04C

System_String_o *
Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__ToString
          (Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *__this,MethodInfo *method)

{
  System_Object_array *args;
  Il2CppObject *pIVar1;
  long lVar2;
  System_String_o *pSVar3;
  undefined8 uVar4;
  int local_48;
  undefined1 local_44 [4];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  uint16_t local_38 [2];
  int32_t local_34;
  
  if ((DAT_0456622b & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
                    /* try { // try from 031ba08c to 032ba223 has its CatchHandler @ 031ba08c
                       catch() { ... } // from try @ 031ba08c with catch @ 031ba08c
                       catch() { ... } // from try @ 031ba230 with catch @ 031ba08c
                       catch() { ... } // from try @ 031ba2d8 with catch @ 031ba08c
                       catch() { ... } // from try @ 031ba2fc with catch @ 031ba08c
                       catch() { ... } // from try @ 031ba344 with catch @ 031ba08c
                       catch() { ... } // from try @ 031ba3d8 with catch @ 031ba08c
                       catch() { ... } // from try @ 031ba3ec with catch @ 031ba08c */
    FUN_01bab630(&char_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_15437);
    DAT_0456622b = 1;
  }
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,6);
  local_34 = (__this->fields)._NNEIIMCKKNF_k__BackingField;
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
  if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((pIVar1 != (Il2CppObject *)0x0) &&
     (lVar2 = thunk_FUN_01bda71c(pIVar1,(((args->obj).klass)->_1).element_class), lVar2 == 0)) {
LAB_031ba2dc:
    uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(uVar4,0);
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = pIVar1;
    thunk_FUN_01c20e04(args->m_Items,pIVar1);
    local_38[0] = (__this->fields)._LCDGIBKEIEO_k__BackingField;
    pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(char_TypeInfo,local_38);
    if ((pIVar1 != (Il2CppObject *)0x0) &&
       (lVar2 = thunk_FUN_01bda71c(pIVar1,(((args->obj).klass)->_1).element_class), lVar2 == 0))
    goto LAB_031ba2dc;
    if (1 < (uint)args->max_length) {
      args->m_Items[1] = pIVar1;
      thunk_FUN_01c20e04(args->m_Items + 1,pIVar1);
      local_3c[0] = (__this->fields).GIJDENLPLCD;
      pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(bool_TypeInfo,local_3c);
      if ((pIVar1 != (Il2CppObject *)0x0) &&
         (lVar2 = thunk_FUN_01bda71c(pIVar1,(((args->obj).klass)->_1).element_class), lVar2 == 0))
      goto LAB_031ba2dc;
      if (2 < (uint)args->max_length) {
        args->m_Items[2] = pIVar1;
        thunk_FUN_01c20e04(args->m_Items + 2,pIVar1);
        local_40[0] = (__this->fields).BFPMONAEFGM;
        pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(bool_TypeInfo,local_40);
        if ((pIVar1 != (Il2CppObject *)0x0) &&
           (lVar2 = thunk_FUN_01bda71c(pIVar1,(((args->obj).klass)->_1).element_class), lVar2 == 0))
        goto LAB_031ba2dc;
        if (3 < (uint)args->max_length) {
          args->m_Items[3] = pIVar1;
          thunk_FUN_01c20e04(args->m_Items + 3,pIVar1);
          local_44[0] = (__this->fields).OMADFGNPHPE;
          pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(bool_TypeInfo,local_44);
                    /* try { // try from 031ba224 to 032ba22f has its CatchHandler @ 031ba300 */
                    /* try { // try from 031ba230 to 032ba25f has its CatchHandler @ 031ba08c */
          if ((pIVar1 != (Il2CppObject *)0x0) &&
             (lVar2 = thunk_FUN_01bda71c(pIVar1,(((args->obj).klass)->_1).element_class), lVar2 == 0
             )) goto LAB_031ba2dc;
          if (4 < (uint)args->max_length) {
            args->m_Items[4] = pIVar1;
            thunk_FUN_01c20e04(args->m_Items + 4,pIVar1);
                    /* try { // try from 031ba260 to 032ba27b has its CatchHandler @ 031ba310 */
            local_48 = (__this->fields)._OLGGFEFHBAP_k__BackingField << 2;
            pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_48);
                    /* try { // try from 031ba280 to 032ba28f has its CatchHandler @ 031ba30c */
            if ((pIVar1 != (Il2CppObject *)0x0) &&
               (lVar2 = thunk_FUN_01bda71c(pIVar1,(((args->obj).klass)->_1).element_class),
               lVar2 == 0)) goto LAB_031ba2dc;
                    /* try { // try from 031ba294 to 032ba2b3 has its CatchHandler @ 031ba308 */
            if (5 < (uint)args->max_length) {
              args->m_Items[5] = pIVar1;
              thunk_FUN_01c20e04(args->m_Items + 5,pIVar1);
                    /* try { // try from 031ba2b8 to 032ba2d7 has its CatchHandler @ 031ba304 */
              pSVar3 = System_String__Format(StringLiteral_15437,args,(MethodInfo *)0x0);
              return pSVar3;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 031ba2d8 to 032ba2f7 has its CatchHandler @ 031ba08c */
  FUN_01bab8d0();
}

