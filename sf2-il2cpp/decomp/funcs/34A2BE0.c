// LCOODJKAICL$$FIGCOMDDIOM @ RVA 0x34A2BE0

int32_t LCOODJKAICL__FIGCOMDDIOM
                  (System_String_o *AAIHDEKMIJG,System_String_o *HDGOGGAJMEL,MethodInfo *method)

{
  int32_t iVar1;
  int iVar2;
  
  if (AAIHDEKMIJG != (System_String_o *)0x0) {
    iVar1 = System_String__IndexOf(AAIHDEKMIJG,HDGOGGAJMEL,(MethodInfo *)0x0);
    if (iVar1 == -1) {
      iVar2 = 0;
    }
    else {
      if (HDGOGGAJMEL == (System_String_o *)0x0) goto LAB_035a2c18;
      iVar2 = (HDGOGGAJMEL->fields)._stringLength + iVar1;
    }
    return iVar2;
  }
LAB_035a2c18:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

