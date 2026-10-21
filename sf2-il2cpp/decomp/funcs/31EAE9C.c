// KGLCGFMIEGI$$GIMAJOGGBHM @ RVA 0x31EAE9C

void KGLCGFMIEGI__GIMAJOGGBHM
               (KGLCGFMIEGI_o *__this,Facebook_Unity_InitDelegate_o *MEBBNHCIEOC,MethodInfo *method)

{
  bool bVar1;
  Facebook_Unity_InitDelegate_o **ppFVar2;
  Facebook_Unity_InitDelegate_o *onInitComplete;
  MethodInfo *method_00;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = MEBBNHCIEOC;
  auVar3._0_8_ = __this;
  if ((DAT_04566da3 & 1) == 0) {
    FUN_01bab630(&Facebook_Unity_FB_TypeInfo);
    FUN_01bab630(&Facebook_Unity_InitDelegate_TypeInfo);
    FUN_01bab630(&Method_KGLCGFMIEGI_PKLMDBAFDMH__);
    auVar3 = FUN_01bab630(&StringLiteral_7529);
    DAT_04566da3 = 1;
  }
  bVar1 = KGLCGFMIEGI__GLICONIIINB(auVar3._0_8_,auVar3._8_8_);
  if (bVar1) {
    KGLCGFMIEGI__PKLMDBAFDMH(__this,method_00);
    return;
  }
  ppFVar2 = &(__this->fields).BPONHHDHOAB;
  *ppFVar2 = MEBBNHCIEOC;
  thunk_FUN_01c20e04(ppFVar2,MEBBNHCIEOC);
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_7529,(MethodInfo *)0x0);
  onInitComplete =
       (Facebook_Unity_InitDelegate_o *)thunk_FUN_01bda818(Facebook_Unity_InitDelegate_TypeInfo);
  Facebook_Unity_InitDelegate___ctor();
  if ((Facebook_Unity_FB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Facebook_Unity_FB__Init
            (onInitComplete,(Facebook_Unity_HideUnityDelegate_o *)0x0,(System_String_o *)0x0,
             (MethodInfo *)0x0);
  return;
}

