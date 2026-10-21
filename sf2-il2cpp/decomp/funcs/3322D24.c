// IAGNPGHOAIC$$BMMOAFKFHNN @ RVA 0x3322D24

void IAGNPGHOAIC__BMMOAFKFHNN(IAGNPGHOAIC_o *__this,bool EEODCFBPGAL,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_AssetBundle_o **ppUVar2;
  UnityEngine_Object_o *x;
  
  if ((DAT_0456785c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456785c = 1;
  }
  ppUVar2 = &(__this->fields).IMJGDBPFCLJ;
  x = (UnityEngine_Object_o *)*ppUVar2;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if (*ppUVar2 != (UnityEngine_AssetBundle_o *)0x0) {
    UnityEngine_AssetBundle__Unload(*ppUVar2,EEODCFBPGAL,(MethodInfo *)0x0);
    *ppUVar2 = (UnityEngine_AssetBundle_o *)0x0;
    thunk_FUN_01c20e04(ppUVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

