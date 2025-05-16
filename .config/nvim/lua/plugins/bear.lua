-- since this is just an example spec, don't actually load anything here and return an empty spec
-- stylua: ignore
-- if true then return {} end

-- every spec file under the "plugins" directory will be loaded automatically by lazy.nvim
--
-- In your plugin files, you can:
-- * add extra plugins
-- * disable/enabled LazyVim plugins
-- * override the configuration of LazyVim plugins
return {
  -- disable trouble
  { "Saghen/blink.cmp",
    enabled = false
  },
  {
    "folke/snacks.nvim",
    opts = {
      words = {
        enabled = true,
      }
    }
  },
  {
    "neovim/nvim-lspconfig",
    opts = {
      document_highlight = {
        enabled = true,
      },
    },
  },
  -- add gruvbox
  { "ellisonleao/gruvbox.nvim" },

  -- add gruvbox-material
  {
    "sainnhe/gruvbox-material",
    lazy = false,
    config = function()
      -- Optionally configure and load the colorscheme
      -- directly inside the plugin declaration.
      vim.g.gruvbox_materialmaterial_italic = true
      vim.g.gruvbox_material_foreground = "mix"
      -- vim.g.gruvbox_material_transparent_background = 1
      vim.g.gruvbox_material_background = "hard"
    end,
  },
  -- add everforest
  {
    "sainnhe/everforest",
    lazy = false,
    config = function()
      -- Optionally configure and load the colorscheme
      -- directly inside the plugin declaration.
      vim.g.everforest_enable_italic = true
      -- vim.g.everforest_transparent_background = 1
      vim.g.everforest_background = "hard"
    end,
  },
  {
    "rebelot/kanagawa.nvim",
  },

  {
    "folke/tokyonight.nvim",
    opts = {
      -- transparent = true,
      style = moon,
      styles = {
        sidebars = "transparent",
        floats = "transparent",
      },
    },
  },

  {
    "savq/melange-nvim",
  },

  {
    "theniceboy/nvim-deus"
  },

  {
    'Everblush/nvim',
    name = 'everblush'
  },

  {
  "thesimonho/kanagawa-paper.nvim",
  },
  -- load last colorscheme
  {
    "https://github.com/raddari/last-color.nvim",
    config = function()
      -- We may also add: or 'habamax', but this is not important for this sample.
      local theme = require("last-color").recall()
      vim.cmd(("colorscheme %s"):format(theme))
    end,
  },
}
