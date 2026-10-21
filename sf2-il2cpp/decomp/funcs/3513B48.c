// FEKEAPCCOOB$$KPOBFGCNFAG @ RVA 0x3513B48

int32_t FEKEAPCCOOB__KPOBFGCNFAG(FEKEAPCCOOB_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_KeyValuePair_Button__TabView___o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_0456890b & 1) == 0) {
    auVar2 = FUN_01bab630(&
                          Method_System_Collections_Generic_List<KeyValuePair<Button,_TabView>>_get_Count__
                         );
    DAT_0456890b = 1;
  }
  pSVar1 = (__this->fields).IJLEELMHJNN;
  if (pSVar1 != (System_Collections_Generic_List_KeyValuePair_Button__TabView___o *)0x0) {
    return (pSVar1->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}

