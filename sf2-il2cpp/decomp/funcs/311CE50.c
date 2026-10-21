// HEINPCIAMNL$$BHECOANFKJN @ RVA 0x311CE50

void HEINPCIAMNL__BHECOANFKJN(HEINPCIAMNL_o *__this,int32_t BKFOLMBMFNP,MethodInfo *method)

{
  bool bVar1;
  LCKCDEKNLOA_o *__this_00;
  MethodInfo *method_00;
  
  bVar1 = OMMDIMHOHLK__JKOMBMIBMBL(BKFOLMBMFNP,(MethodInfo *)0x0);
  if (bVar1) {
    bVar1 = *(char *)&(__this->fields).IOOGMJKMGDL != '\0';
  }
  else {
    if (__this == (HEINPCIAMNL_o *)0x0) goto LAB_0321ceb4;
    bVar1 = true;
  }
  *(bool *)&(__this->fields).IOOGMJKMGDL = bVar1;
  HEINPCIAMNL__MHAMHDGMMMP(__this,method_00);
  if (*(char *)&(__this->fields).IOOGMJKMGDL == '\0') {
    __this_00 = (__this->fields).EBAHJECPAHA;
  }
  else {
    __this_00 = *(LCKCDEKNLOA_o **)&(__this->fields).ACCIHBHMFPN;
  }
  if (__this_00 != (LCKCDEKNLOA_o *)0x0) {
    LCKCDEKNLOA__MAHFCKJGBPP(__this_00,(__this->fields).super.IJOKKFKPBEP,(MethodInfo *)0x0);
    return;
  }
LAB_0321ceb4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

